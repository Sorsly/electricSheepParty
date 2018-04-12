/* Electric Sheep Party: Bot Code
 * This is the code that runs on the ESP32, that controls the bots.
 *
 * It works on a request response model. First it instantiates all of the peripherals
 * Then it connects to the wifi access point, and then enters the main loop
 * In the main loop, it constantly listens from a command from the CCCP, in the form of a udp packet
 * and then calls a move function to try and follow through with those commands. After that function
 * it then responds to the CCCP with its current state
 */
#include "udp.h"
#include "i2c.h"
#include "motor.h"
#include <math.h>
// Tag for the main loop
static const char *TAG = "MAIN";

// These are used to connect to the wifi
static EventGroupHandle_t wifi_event_group;
ip4_addr_t ip;
char ip_str[30];
bool connected_to_ap = false;

//INPUT PINS
static const uint64_t photorec = (1 <<1);
//OUTPUT PINS
static const uint64_t topled = (1 <<3);
static const uint64_t laser = (1 <<2);
static const uint64_t debugR = (1 <<4);
static const uint64_t debugG = (1 <<16);

//The initial orientation measurment for subtracting off values
double startXorient = 0;
double startYorient = 0;

void doubleTwoBytes(double in,char * b1,char * b2){
    int16_t floored = (int16_t)in;
    *b1 = floored>>8;
    *b2 = floored & 0x00FF;

}
//Function to send the command struct to the CCCP
void send_thread(resp rsp,commands cmd) {

    //Standard C socket code
    int socket_fd;
    struct sockaddr_in sa;

    int sent_data;
    char * data_buffer = malloc(sizeof(char)*RESPSIZE);
    char bBuff1;
    char bBuff2;

    socket_fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if ( socket_fd < 0 ) {
        printf("socket call failed");
        exit(0);

    }

    memset(&sa, 0, sizeof(struct sockaddr_in));
    inet_pton(AF_INET, CCCPIP, &(sa.sin_addr.s_addr));
    sa.sin_family = AF_INET;
    //The port responds to the port assigned by the CCCP
    sa.sin_port = htons(cmd.portAssign);

    //Parse State
    data_buffer[0] = rsp.health;
    data_buffer[1] = rsp.accelX;
    data_buffer[2] = rsp.accelY;
    data_buffer[3] = rsp.battery;
    bBuff1 = (char)rsp.lastorient;
    bBuff2 = (char)(rsp.lastorient>>8);
    data_buffer[4] = bBuff1;
    data_buffer[5] = bBuff2;
    doubleTwoBytes(rsp.magX,&bBuff1,&bBuff2);
    data_buffer[6] = bBuff1;
    data_buffer[7] = bBuff2;
    doubleTwoBytes(rsp.magY,&bBuff1,&bBuff2);
    data_buffer[8] = bBuff1;
    data_buffer[9] = bBuff2;

    //Sending the data
    sent_data = sendto(socket_fd, data_buffer,RESPSIZE,0,(struct sockaddr*)&sa,sizeof(sa));
    if(sent_data < 0){
	    printf("send failed\n");
	    close(socket_fd);
	    exit(2);
    }

    //Closing the socket
    close(socket_fd);
}


//This function blocks, and waits for commands to come in from the designated port
void receive_thread(commands *cmd) {

    //Standard C socket code
    int socket_fd;
    struct sockaddr_in sa,ra;

    int recv_data;
    char data_buffer[12];

    socket_fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if ( socket_fd < 0 )
    {

        printf("socket call failed");
        exit(0);

    }

    memset(&sa, 0, sizeof(struct sockaddr_in));
    ra.sin_family = AF_INET;
    //Recieve on any adress that htis bot is assigned too
    ra.sin_addr.s_addr = htonl(INADDR_ANY);
    //All of the bots listen in at this hard coded value
    ra.sin_port = htons(RECEIVER_PORT_NUM);


    //Block until a connection
    if (bind(socket_fd, (struct sockaddr *)&ra, sizeof(struct sockaddr_in)) == -1){
    close(socket_fd);
    exit(1);
    }

    //Recieve
    recv_data = recv(socket_fd,data_buffer,sizeof(data_buffer),0);
    if(recv_data > 0)
    {
        data_buffer[recv_data] = '\0';
    }
    close(socket_fd);
    //Place the raw data into the command structure
//This is a utility function that takes the raw data and puts it into the command structure
//    void parsecommands(char * raw, commands * cmd){
    cmd->sheepf = data_buffer[0];
    cmd->relDesX = (int16_t)(data_buffer[1] | (data_buffer[2] << 8));
    cmd->relDesY = (int16_t)(data_buffer[3] | (data_buffer[4] << 8));
    cmd->servoAngle = data_buffer[5];
    cmd->portAssign= (uint16_t)(data_buffer[6] | (data_buffer[7] << 8));
    cmd->camorient = (uint16_t)(data_buffer[8] | (data_buffer[9] << 8));
    cmd->twiddleL = data_buffer[10];
    cmd->twiddleR = data_buffer[11];
//   }

}


//This is a special handler function used by the esp-idf api to dictate how the not connects to the wifi.
//Full documentation on how this function needs to work can be found in the esp-idf site
static esp_err_t cust_wifi_event_handler(void *ctx, system_event_t *event)
{
    switch (event->event_id) {
        case SYSTEM_EVENT_STA_START:
            ESP_ERROR_CHECK(esp_wifi_connect());
            break;
        case SYSTEM_EVENT_STA_GOT_IP:
        	xEventGroupSetBits(wifi_event_group, CONNECTED_BIT);
            ip = event->event_info.got_ip.ip_info.ip;
            inet_ntop(AF_INET,&ip,ip_str,30);
            connected_to_ap = true;
            break;
        case SYSTEM_EVENT_STA_DISCONNECTED:
            ESP_ERROR_CHECK(esp_wifi_connect());
            xEventGroupClearBits(wifi_event_group, CONNECTED_BIT);
            break;
        default:
            break;
    }
    return ESP_OK;
}


//Initializes the wifi
void init_wifi(void)
{
    tcpip_adapter_init();
    wifi_event_group = xEventGroupCreate();
    ESP_ERROR_CHECK( esp_event_loop_init(cust_wifi_event_handler, NULL) );

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK( esp_wifi_init(&cfg) );
    ESP_ERROR_CHECK( esp_wifi_set_storage(WIFI_STORAGE_RAM) );
    wifi_config_t wifi_config = {
        .sta = {
            .ssid = "Sliva",
            .password = "plumsaretasty",
            .scan_method = WIFI_FAST_SCAN,
            .sort_method = WIFI_CONNECT_AP_BY_SIGNAL,
            .threshold.rssi = CONFIG_FAST_SCAN_MINIMUM_SIGNAL,
            .threshold.authmode = WIFI_AUTH_WPA2_PSK,
        },
    };
    ESP_ERROR_CHECK( esp_wifi_set_mode(WIFI_MODE_STA) );
    ESP_ERROR_CHECK( esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config) );
    ESP_ERROR_CHECK( esp_wifi_start() );

}



//This is the function that does all the lifting of taking the command, doingin things with it,
// And loading the state with the proper values
void move(commands * cmd, resp *state){
    canhit(&(state->health));
    fire_laser(cmd->sheepf & 0x08);
    set_angle((uint32_t)cmd->servoAngle);
    top_on(cmd->sheepf & 0x10);
        

    double des_angle=atan2(-cmd->relDesY,cmd->relDesX)*180/3.141;
    if (des_angle<0){
        des_angle+=360;
    }
    //double curr_angle = getRawTheta(startXorient,startYorient,&xMag,&yMag);
    double curr_angle=cmd->camorient;//adjust for camera's angle
    double x2=pow(cmd->relDesX,2);
    double y2=pow(cmd->relDesY,2);
    printf("x2 %f y2 %f",x2,y2);
    double hyp=sqrt(x2+y2);
    double delt_angle=curr_angle-des_angle;
    if (abs(des_angle-curr_angle)>5 && hyp>35){
        double vAangle = abs(delt_angle-state->lastorient);
        int turntime=abs(200*delt_angle/240)*0.02 - vAangle*24;
        if(turntime < 0){
            turntime = 0;
        }
        if (delt_angle>0){
            //turn right
                left_ctl(false,100);
                //right_ctl(true,cmd->twiddleL);
            //vTaskDelay(turntime);
        }else{
                left_ctl(true, 100);
                //right_ctl(false, cmd->twiddleR);
            //vTaskDelay(turntime);
        }
        }else{
            left_ctl(true,0);
            right_ctl(true,0);
        }
        if (abs(des_angle-curr_angle)<35){
            if (hyp>35&&hyp<70){
                left_ctl(true,cmd->twiddleL);
                right_ctl(true,cmd->twiddleR);
            } else if(hyp>70){
                left_ctl(true,cmd->twiddleL);
                right_ctl(true,cmd->twiddleR);
            }
        }
    state->lastorient = (uint16_t )abs(delt_angle);
}

//Initializes the proper pins as inputs and outputs
void init_gpio(){
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (topled|laser|debugG|debugR);
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);

    io_conf.intr_type = GPIO_PIN_INTR_POSEDGE;
    io_conf.pin_bit_mask = photorec;
    io_conf.mode = GPIO_MODE_INPUT;
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

}

//the main. Is called on bot startup
void app_main() {


    //The commands of the bot and the state of the bot. Dictate the bots movements
    commands * nextCommands = malloc(sizeof(commands));
    resp * state = malloc(sizeof(state));

    state->health = 10;
    //init nvs_flash. NVS flash is used by the wifi to save configurations, making it faster to connect
    esp_err_t nvsret = nvs_flash_init();

    if (nvsret == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        nvsret = nvs_flash_init();
    }

    //Initializing things
    init_wifi();
    // Wait for when the bot has connected to the AP
    while(!connected_to_ap){}
   // ota_example_task(wifi_event_group);
    init_turret(&(state->health));
    init_i2c();
    init_motors();
    init_gpio();

    //The following code samples the IMU orientation to get initialized vector values
    uint8_t out;
    uint8_t x_low;
    uint8_t y_low;
    uint8_t x_high;
    uint8_t y_high;
    int numsamples = 100;
    uint8_t * databuff = malloc(sizeof(uint8_t)*6);
    for(int i = 0;i < numsamples; i ++) {
        out = readmag(0x09);
        if (out & 0x01) {
            /*  x_low = readmag(0x04);
              y_low = readmag(0x06);
              z_low = readmag(0x08);
              x_high = readmag(0x03);
              y_high = readmag(0x05);
              z_high = readmag(0x07);
              */
            readMagData(databuff);
            x_high = databuff[0];
            x_low = databuff[1];
            y_high = databuff[2];
            y_low = databuff[3];
            startXorient += (int16_t)(((uint16_t)x_high<<8) | x_low);
            startYorient += (int16_t)(((uint16_t)y_high<<8) | y_low);
        } else{
            i--;
        }
    }
    startXorient = startXorient/numsamples;
    startYorient = startYorient/numsamples;


    /*while(true) {
        getRawTheta(startXorient,startYorient);
    }*/
    //Main control loop which blocks for commands, and then responds with state
    while(true){
            receive_thread(nextCommands);
            move(nextCommands,state);
            send_thread(*state,*nextCommands);
    }

}

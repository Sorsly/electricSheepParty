
#include "udp.h"
#include "i2c.h"
#include "motor.h"
static const char *TAG = "MAIN";

static EventGroupHandle_t wifi_event_group;

//INPUT PINS
static const uint64_t photorec = (1 <<1);
//OUTPUT PINS
static const uint64_t topled = (1 <<3);
static const uint64_t laser = (1 <<2);
static const uint64_t debugR = (1 <<4);
static const uint64_t debugG = (1 <<16);


ip4_addr_t ip;
char ip_str[30];
bool connected_to_ap = false;
double startXorient = 0;
double startYorient = 0;

void send_thread(resp rsp,commands cmd) {

    int socket_fd;
    struct sockaddr_in sa;

    int sent_data;
    char data_buffer[5];

    socket_fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if ( socket_fd < 0 ) {
        printf("socket call failed");
        exit(0);

    }

    memset(&sa, 0, sizeof(struct sockaddr_in));
    inet_pton(AF_INET, CCCPIP, &(sa.sin_addr.s_addr));
    sa.sin_family = AF_INET;
    sa.sin_port = htons(cmd.portAssign);

    //Parse State
    data_buffer[0] = rsp.health;
    data_buffer[1] = rsp.accelX;
    data_buffer[2] = rsp.accelY;
    data_buffer[3] = rsp.orient;
    data_buffer[4] = rsp.battery;

    ESP_LOGI(TAG,"SENDING");
    ESP_LOGI(TAG,"Received packet from %s:%d\n", inet_ntoa(sa.sin_addr), ntohs(sa.sin_port));
    sent_data = sendto(socket_fd, data_buffer,RESPSIZE,0,(struct sockaddr*)&sa,sizeof(sa));
    if(sent_data < 0){
	    printf("send failed\n");
	    close(socket_fd);
	    exit(2);
    }

    close(socket_fd);
}

void parsecommands(char * raw, commands * cmd){
    cmd->sheepf = raw[0];
    cmd->relDesX = raw[1];
    cmd->relDesY = raw[2];
    cmd->servoAngle= raw[3];
    cmd->portAssign= (uint16_t)(raw[4] | (raw[5] << 8));
}
void receive_thread(commands *cmd) {

    int socket_fd;
    struct sockaddr_in sa,ra;

    int recv_data; char data_buffer[80];

    socket_fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if ( socket_fd < 0 )
    {

        printf("socket call failed");
        exit(0);

    }

    memset(&sa, 0, sizeof(struct sockaddr_in));
    ra.sin_family = AF_INET;
    ra.sin_addr.s_addr = htonl(INADDR_ANY);
    ra.sin_port = htons(RECEIVER_PORT_NUM);

    ESP_LOGD(TAG,"SOCKET PREPARED");

    if (bind(socket_fd, (struct sockaddr *)&ra, sizeof(struct sockaddr_in)) == -1){
    close(socket_fd);
    exit(1);
    }
    ESP_LOGD(TAG,"RECIVEING SOCKET READY");

    recv_data = recv(socket_fd,data_buffer,sizeof(data_buffer),0);
    if(recv_data > 0)
    {

        data_buffer[recv_data] = '\0';

    }
    close(socket_fd);
    parsecommands(data_buffer,cmd);

}



static esp_err_t cust_wifi_event_handler(void *ctx, system_event_t *event)
{
    switch (event->event_id) {
        case SYSTEM_EVENT_STA_START:
            ESP_LOGI(TAG, "SYSTEM_EVENT_STA_START");
            ESP_ERROR_CHECK(esp_wifi_connect());
            break;
        case SYSTEM_EVENT_STA_GOT_IP:
        	xEventGroupSetBits(wifi_event_group, CONNECTED_BIT);
            ESP_LOGI(TAG, "SYSTEM_EVENT_STA_GOT_IP");
            ESP_LOGI(TAG, "********************************************");
            ESP_LOGI(TAG, "* We are now connected to AP")
            ESP_LOGI(TAG, "* - Our IP address is: %s", ip4addr_ntoa(&event->event_info.got_ip.ip_info.ip));
            ESP_LOGI(TAG, "********************************************");
            ip = event->event_info.got_ip.ip_info.ip;
            inet_ntop(AF_INET,&ip,ip_str,30);
            connected_to_ap = true;
            break;
        case SYSTEM_EVENT_STA_DISCONNECTED:
            ESP_LOGI(TAG, "SYSTEM_EVENT_STA_DISCONNECTED");
            ESP_ERROR_CHECK(esp_wifi_connect());
            xEventGroupClearBits(wifi_event_group, CONNECTED_BIT);
            break;
        default:
            break;
    }
    return ESP_OK;
}


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
    ESP_LOGI(TAG, "Setting WiFi configuration SSID %s...", wifi_config.sta.ssid);
    ESP_ERROR_CHECK( esp_wifi_set_mode(WIFI_MODE_STA) );
    ESP_ERROR_CHECK( esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config) );
    ESP_ERROR_CHECK( esp_wifi_start() );

}




void move(commands * cmd, resp *state){
	ESP_LOGI(TAG,"DOING THINGS TO ACHIEVE DESIRED STATE");
    ESP_LOGI(TAG,"DYCLE1 %04X",cmd->sheepf);
    set_angle((uint32_t)cmd->servoAngle);
    canhit(&(state->health));
    fire_laser(true);
    top_on(true);
    fire_laser(false);
    top_on(false);
    double theta = getRawTheta(startXorient,startYorient);
    state->orient =  (char)(theta*255/360);
}


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
void app_main() {

    commands * nextCommands = malloc(sizeof(commands));
    resp * state = malloc(sizeof(state));
    state->health = 10;
    //init nvs_flash
    esp_err_t nvsret = nvs_flash_init();

    if (nvsret == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        nvsret = nvs_flash_init();
    }

    init_wifi();
    while(!connected_to_ap){}
   // ota_example_task(wifi_event_group);
    init_turret(&(state->health));
    init_i2c();

    uint8_t out = readmag(0x09);
    uint8_t x_low;
    uint8_t y_low;
    uint8_t x_high;
    uint8_t y_high;
    int numsamples = 100;
    uint8_t * databuff = malloc(sizeof(uint8_t)*6);
    for(int i = 0;i < numsamples; i ++) {
        out = 0x13; //readmag(0x09);
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


    init_motors();
    init_gpio();
    double angle;
	ESP_LOGI(TAG,"BOT ACTIVE7");
    while(true){
            receive_thread(nextCommands);
            move(nextCommands,state);
            send_thread(*state,*nextCommands);
    }

    init_motors();
}

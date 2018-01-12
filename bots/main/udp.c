#include <string.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/event_groups.h>
#include <esp_system.h>
#include <esp_wifi.h>
#include <esp_event_loop.h>
#include <esp_log.h>
#include <esp_err.h>
#include <nvs_flash.h>

#include <lwip/err.h>
#include <lwip/sockets.h>
#include <lwip/sys.h>
#include <lwip/netdb.h>
#include <lwip/dns.h>
#include "emul_ip.h"
#include "driver/i2c.h"


#define EXAMPLE_WIFI_PORT CONFIG_WIFI_PORT
#define EXAMPLE_WIFI_SSID CONFIG_WIFI_SSID
#define EXAMPLE_WIFI_PASS CONFIG_WIFI_PASSWORD


static const char *TAG = "UDP";

static EventGroupHandle_t wifi_event_group;
const int CONNECTED_BIT = BIT0;
const int STARTED_BIT = BIT1;


#define RECEIVER_PORT_NUM 1917


#define SENDER_PORT_NUM 1918
// TODO, GET THIS FROM GOT_IP OWN IP ADDRESS
#define SENDER_IP_ADDR "192.168.42.24"
//u32_t *my_ip=(u32_t *)&event->event_info.got_ip.ip_info.ip;
char my_ip[32];

//CPU IP ADDRESS
#define RECEIVER_IP_ADDR "192.168.42.23"


// Similar to uint32_t system_get_time(void)
uint32_t get_usec() {

  struct timeval tv;
   gettimeofday(&tv,NULL);
   return (tv.tv_sec*1000000 + tv.tv_usec);


  //uint64_t tmp=get_time_since_boot();
  //uint32_t ret=(uint32_t)tmp;
  //return ret;
}




void send_thread(void *pvParameters)
{

    int socket_fd;
    struct sockaddr_in sa;

    int sent_data; char data_buffer[80];
    /* Creates an UDP socket (SOCK_DGRAM) with Internet Protocol Family (PF_INET).
     * Protocol family and Address family related. For example PF_INET Protocol Family and AF_INET family are coupled.
    */
    socket_fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if ( socket_fd < 0 )
    {

        printf("socket call failed");
        exit(0);

    }

    memset(&sa, 0, sizeof(struct sockaddr_in));
    sa.sin_family = AF_INET;
    sa.sin_port = htons(SENDER_PORT_NUM);

    if( inet_aton(RECEIVER_IP_ADDR,&sa.sin_addr) == 0 ){
	    exit(1);
    }
    strcpy(data_buffer,"Hello World");
   
    ESP_LOGD(TAG,"SENDING");
    sent_data = sendto(socket_fd, data_buffer,sizeof("Hello World"),0,(struct sockaddr*)&sa,sizeof(sa));
    if(sent_data < 0){
	    printf("send failed\n");
	    close(socket_fd);
	    exit(2); 
    }

    close(socket_fd); 
}

void move(){
	printf("DOING THINGS TO ACHIEVE DESIRED STATE");
}

void receive_thread(void *pvParameters)
{

    int socket_fd;
    struct sockaddr_in sa,ra;

    int recv_data; char data_buffer[80];
    /* Creates an UDP socket (SOCK_DGRAM) with Internet Protocol Family (PF_INET).
     * Protocol family and Address family related. For example PF_INET Protocol Family and AF_INET family are coupled.
    */

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


    /* Bind the UDP socket to the port RECEIVER_PORT_NUM and to the current
    * machines IP address (Its defined by RECEIVER_PORT_NUM).
    * Once bind is successful for UDP sockets application can operate
    * on the socket descriptor for sending or receiving data.
    */
    if (bind(socket_fd, (struct sockaddr *)&ra, sizeof(struct sockaddr_in)) == -1)
    {

    printf("Bind to Port Number %d ,IP address %s failed\n",RECEIVER_PORT_NUM,RECEIVER_IP_ADDR);
    close(socket_fd);
    exit(1);
    }
    printf("Bind to Port Number %d ,IP address %s SUCCESS!!!\n",RECEIVER_PORT_NUM,my_ip);
    /* RECEIVER_PORT_NUM is port on which Server waits for data to
    * come in. It copies the received data into receive buffer and
    * prints the received data as string. If no data is available it
    * blocks.recv calls typically return any availbale data on the socket instead of waiting for the entire data to come.
    */
    ESP_LOGD(TAG,"RECIVEING SOCKET READY");

    recv_data = recv(socket_fd,data_buffer,sizeof(data_buffer),0);
    if(recv_data > 0)
    {

        data_buffer[recv_data] = '\0';
        printf("DATA RECIVED: %s\n",data_buffer);

    }
    close(socket_fd); 

}

static esp_err_t esp32_wifi_eventHandler(void *ctx, system_event_t *event) {

	switch(event->event_id) {
		case SYSTEM_EVENT_WIFI_READY:
			ESP_LOGD(TAG, "EVENT_WIFI_READY");

			break;

		case SYSTEM_EVENT_AP_STACONNECTED:
			ESP_LOGD(TAG, "EVENT_AP_START");
			break;

		// When we have started being an access point
		case SYSTEM_EVENT_AP_START: 
			ESP_LOGD(TAG, "EVENT_START");
			xEventGroupSetBits(wifi_event_group, STARTED_BIT);            

			break;
		case SYSTEM_EVENT_SCAN_DONE:
			ESP_LOGD(TAG, "EVENT_SCAN_DONE");
			break;

		case SYSTEM_EVENT_STA_CONNECTED: 
			ESP_LOGD(TAG, "EVENT_STA_CONNECTED");
			xEventGroupSetBits(wifi_event_group, CONNECTED_BIT);
			break;

		// If we fail to connect to an access point as a station, become an access point.
		case SYSTEM_EVENT_STA_DISCONNECTED:
			xEventGroupClearBits(wifi_event_group, CONNECTED_BIT);

			ESP_LOGD(TAG, "EVENT_STA_DISCONNECTED");
			ESP_ERROR_CHECK( esp_wifi_connect() );
			// We think we tried to connect as a station and failed! ... become
			// an access point.
			break;

			// If we connected as a station then we are done and we can stop being a
			// web server.
		case SYSTEM_EVENT_STA_START:
			ESP_LOGD(TAG, "EVENT_STA_START");
			ESP_ERROR_CHECK( esp_wifi_connect() );
			break;

		case SYSTEM_EVENT_STA_GOT_IP: 
			ESP_LOGD(TAG, "********************************************");
			ESP_LOGD(TAG, "* We are now connected to AP")
			ESP_LOGD(TAG, "* - Our IP address is: " IPSTR, IP2STR(&event->event_info.got_ip.ip_info.ip));
			ESP_LOGD(TAG, "********************************************");
			ESP_LOGD(TAG,"Starting receive\n");

			for(;;){
				receive_thread(NULL);
				move();
				send_thread(NULL);
			}
			break;

		default: // Ignore the other event types
			break;
	} // Switch event

	return ESP_OK;
} // esp32_wifi_eventHandler



static void initialise_wifi(void)
{
    tcpip_adapter_init();
    ESP_ERROR_CHECK( esp_event_loop_init(esp32_wifi_eventHandler, NULL) );

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();

    ESP_ERROR_CHECK( esp_wifi_init(&cfg) );
    ESP_ERROR_CHECK( esp_wifi_set_storage(WIFI_STORAGE_RAM) );
    wifi_config_t wifi_config = {
        .sta = {
	           .ssid = EXAMPLE_WIFI_SSID,
               .password = EXAMPLE_WIFI_PASS,
        },
    };
    ESP_LOGI(TAG, "Setting WiFi configuration SSID %s...", wifi_config.sta.ssid);
    ESP_ERROR_CHECK( esp_wifi_set_mode(WIFI_MODE_STA) );
    ESP_ERROR_CHECK( esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config) );
    ESP_ERROR_CHECK( esp_wifi_start() );

}
static void initialise_i2c(void){
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = GPIO_NUM_18;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = GPIO_NUM_19;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = 100000;


    esp_err_t i2cret = i2c_param_config(I2C_NUM_0,&conf);
    if(i2cret == ESP_ERR_INVALID_ARG){
	    ESP_LOGE(TAG,"ERROR WITH I2C\n");
	    return;
    }
    ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0,I2C_MODE_MASTER,0,0,0));
    return;

}
static void i2c_comm(void){
	i2c_cmd_handle_t cmd = i2c_cmd_link_create();
	uint8_t * data = malloc(sizeof(uint8_t)*3);
	data[0] = 0xff;
	data[1] = 0xff;
	data[2] = 0xff;
	ESP_ERROR_CHECK(i2c_master_start(cmd));
	ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0xff, true));
	ESP_ERROR_CHECK(i2c_master_write(cmd, data, 3, true));
	ESP_ERROR_CHECK(i2c_master_stop(cmd));
	if(i2c_master_cmd_begin(I2C_NUM_0,cmd,(TickType_t)10) == ESP_FAIL){
		ESP_LOGE(TAG,"SLAVE DID NOT ACK\n")
		return;
	}

	return;
}

void app_main()
{
    //init nvs_flash
    esp_err_t nvsret = nvs_flash_init();

    if (nvsret == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        nvsret = nvs_flash_init();
    }
    initialise_i2c();
    i2c_comm();


//    wifi_event_group = xEventGroupCreate();
//    initialise_wifi();

//    ESP_LOGI(TAG, "WIFI Initialized");
}

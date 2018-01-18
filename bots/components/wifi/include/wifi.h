#include <stdint.h>
#include <string.h>
#include <esp_err.h>
#include <lwip/err.h>
#include <lwip/sockets.h>
#include <lwip/sys.h>
#include <lwip/netdb.h>
#include <lwip/dns.h>
#include <emul_ip.h>
#include <esp_event_loop.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/event_groups.h>
#include "esp_wifi.h"
#include "esp_log.h"

#define EXAMPLE_WIFI_PORT CONFIG_WIFI_PORT
#define EXAMPLE_WIFI_SSID CONFIG_WIFI_SSID
#define EXAMPLE_WIFI_PASS CONFIG_WIFI_PASSWORD
#define RECEIVER_PORT_NUM 1917
#define SENDER_PORT_NUM 1918
// TODO, GET THIS FROM GOT_IP OWN IP ADDRESS
#define SENDER_IP_ADDR "192.168.42.24"
// //CPU IP ADDRESS
#define RECEIVER_IP_ADDR "192.168.42.23"

uint32_t get_usec();
void init_wifi(void);
void send_thread(void *pvParameters);
void receive_thread(void *pvParameters);
esp_err_t esp32_wifi_eventHandler(void *ctx, system_event_t *event);

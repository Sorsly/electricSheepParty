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
#define CCCPIP "192.168.42.23"

typedef struct commands {
    char sheepf;
    // sheepF b0 = rst
    // sheepF b1 = dir1
    // sheepF b2 = dir2
    // sheepF b3 = fire
    // sheepF b4 = lightOn
    char duty_cycle1;
    char tOn1;
    char duty_cycle2;
    char tOn2;
    char servoAngle;
    char portAssign;
} commands;
typedef struct resp{
    char health;
    char accelX;
    char accelY;
    char orient;
    char battery;
}resp;

#define EXAMPLE_WIFI_PORT CONFIG_WIFI_PORT
#define EXAMPLE_WIFI_SSID CONFIG_WIFI_SSID
#define EXAMPLE_WIFI_PASS CONFIG_WIFI_PASSWORD
#define RECEIVER_PORT_NUM 1917

uint32_t get_usec();
void init_wifi(void);
void send_thread(resp,commands);
resp move(commands cmd);
commands receive_thread();
commands parsecommands(char * raw);
esp_err_t esp32_wifi_eventHandler(void *ctx, system_event_t *event);
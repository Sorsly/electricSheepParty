#include <stdint.h>
#include <string.h>
#include <esp_err.h>
#include <lwip/err.h>
#include <lwip/sockets.h>
#include <lwip/sys.h>
#include <lwip/netdb.h>
#include <lwip/dns.h>
#include <esp_event_loop.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/event_groups.h>
#include "esp_wifi.h"
#include "esp_log.h"
#include "turret.h"
#include "ota.h"
#include <esp_system.h>
#include <nvs_flash.h>

#define CCCPIP "192.168.42.23"
#define RESPSIZE 5
#define CONNECTED_BIT BIT0


//Commands coming in from the CCCP
typedef struct commands {
    char sheepf;
    // sheepF b0 = rst
    // sheepF b1 = dir1
    // sheepF b2 = dir2
    // sheepF b3 = fire
    // sheepF b4 = lightOn
    //The relative position that the bot should travel to, given itself as the origin
    char relDesX;
    char relDesY;
    char servoAngle;
    //Assigned response port
    uint16_t    portAssign;
} commands;

//The data sent back to the CCCP
typedef struct resp{
    char health;
    char accelX;
    char accelY;
    char orient;
    char battery;
}resp;

#define RECEIVER_PORT_NUM 1917

uint32_t get_usec();
void init_wifi(void);
void send_thread(resp,commands);
void move(commands * cmd,resp * state);
void receive_thread(commands *);
void parsecommands(char * ,commands *);
esp_err_t esp32_wifi_eventHandler(void *ctx, system_event_t *event);

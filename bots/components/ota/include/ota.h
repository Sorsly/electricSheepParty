/*
 * ota.h
 *
 *  Created on: Mar 1, 2018
 *      Author: zhukov
 */
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "esp_ota_ops.h"

#include "nvs.h"
#include "nvs_flash.h"
#define CONNECTED_BIT BIT0
void ota_example_task(EventGroupHandle_t);

#include <string.h>
#include <esp_system.h>
#include <esp_log.h>
#include <esp_err.h>
#include <nvs_flash.h>

#include <esp_system.h>

#include "wifi.h"
#include "i2c.h"
#include "adc.h"
#include "turret.h"

static const char *TAG = "MAIN";

void move(){
	printf("DOING THINGS TO ACHIEVE DESIRED STATE");
}


void app_main()
{
    //init nvs_flash
    esp_err_t nvsret = nvs_flash_init();

    if (nvsret == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        nvsret = nvs_flash_init();
    }

    init_turret();

    set_angle(20);


}

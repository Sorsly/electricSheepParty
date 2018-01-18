#include "i2c.h"
#include <driver/i2c.h>
#include <esp_log.h>
static const char *TAG = "I2C";
void init_i2c(void){
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = CONFIG_PIN_SDA;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = CONFIG_PIN_SCL;
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
void i2c_comm(void){
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

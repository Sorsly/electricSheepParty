#include "i2c.h"
#include <driver/i2c.h>
#include <esp_log.h>
static const char *TAG = "I2C";
void init_i2c(void){
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = 21;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = 22;
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
void writemag(uint8_t addr, uint8_t val){
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x3C, true));

    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, addr, true));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, val, true));
    i2c_master_stop(cmd);
    if(i2c_master_cmd_begin(I2C_NUM_0,cmd,(TickType_t)10) == ESP_FAIL){
        ESP_LOGE(TAG,"SLAVE DID NOT ACK\n")
        return;
    }
    i2c_cmd_link_delete(cmd);
}

uint8_t readmag(uint8_t addr){
    uint8_t ret;
    uint8_t * data = malloc(sizeof(uint8_t));

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x3C, true));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, addr, true));
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x3D, true));
    i2c_master_read_byte(cmd,data,I2C_MASTER_NACK);
    i2c_master_stop(cmd);
    if(i2c_master_cmd_begin(I2C_NUM_0,cmd,(TickType_t)10) == ESP_FAIL){
        ESP_LOGE(TAG,"SLAVE DID NOT ACK\n")
        return 0;
    }
    ESP_LOGE(TAG,"SLAVE ACKed\n")
    i2c_cmd_link_delete(cmd);
    ret = *data;
    free(data);
    return ret;
}
void i2c_comm(void){
    writemag(0x02,00);
    uint8_t out = readmag(0x01);

    ESP_LOGE(TAG,out);
}

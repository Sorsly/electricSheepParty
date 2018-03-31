/* This code handles reading the orientation of the bot
 *
 *
 */

#include "i2c.h"
#include <driver/i2c.h>
#include <esp_log.h>
#include <math.h>
#define PI 3.14159265
static const char *TAG = "I2C";
static const int numsamples = 100;

//Initialize the i2c arguments
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
    //Configurations for the LM303
    writemag(0x00,0x1C);
    writemag(0x01,0x20);
    writemag(0x02,0x00);

    writemag(0x20,0x40);

}
//Utility function for writing a single value to a single address
void writemag(uint8_t addr, uint8_t val){

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    //0x3c is the address of the  magnetometer
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
//Utility function for reading a single value to a single address
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

//Multiread of the known location of xyz mag data
void readMagData(uint8_t * buffer){
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x3C, true));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x03, true));
    ESP_ERROR_CHECK(i2c_master_start(cmd));
    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, 0x3D, true));
    i2c_master_read_byte(cmd,buffer,I2C_MASTER_ACK);
    i2c_master_read_byte(cmd,buffer+1,I2C_MASTER_ACK);
    i2c_master_read_byte(cmd,buffer+2,I2C_MASTER_ACK);
    i2c_master_read_byte(cmd,buffer+3,I2C_MASTER_ACK);
    i2c_master_read_byte(cmd,buffer+4,I2C_MASTER_ACK);
    i2c_master_read_byte(cmd,buffer+5,I2C_MASTER_NACK);
    i2c_master_stop(cmd);
    if(i2c_master_cmd_begin(I2C_NUM_0,cmd,(TickType_t)10) == ESP_FAIL){
        ESP_LOGE(TAG,"SLAVE DID NOT ACK\n")
        return;
    }
    ESP_LOGE(TAG,"SLAVE ACKed\n")
    i2c_cmd_link_delete(cmd);
    return;
}

//Heavy lifting of reading sampling and calculating the theta value
double getRawTheta(double startX, double startY, double * magX,double * magY){
    uint8_t out;
    uint8_t x_low = 0;
    uint8_t y_low = 0;
    uint8_t x_high = 0;
    uint8_t y_high = 0;
    double x = 0;
    double y = 0;
    double theta;
    uint8_t * databuff = malloc(sizeof(uint8_t)*6);
    for(int i = 0;i < numsamples; i ++) {
        out = readmag(0x09);
        if (out & 0x01) {
              readMagData(databuff);
              x_high = databuff[0];
              x_low = databuff[1];
              y_high = databuff[2];
              y_low = databuff[3];
              x += (int16_t)(((uint16_t)x_high<<8) | x_low);
              y += (int16_t)(((uint16_t)y_high<<8) | y_low);

        } else{
            i--;
        }
    }
    free(databuff);
    x /= numsamples;
    y /= numsamples;
    *magX = x;
    *magY = y;
    theta = atan2(x,y)*180/PI;
    if(theta < 0){
        theta += 360;
    }
    printf("%f,%f\n",x,y);
    printf("%d,%d\n",x_low,x_high);
    return theta;
}

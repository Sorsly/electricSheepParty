#include <driver/adc.h>
#include <esp_adc_cal.h>
uint32_t readadc(int adc_chan, esp_adc_cal_characteristics_t chara);
esp_adc_cal_characteristics_t init_adc();

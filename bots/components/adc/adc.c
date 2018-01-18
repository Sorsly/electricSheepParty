#include "adc.h"
static const char *TAG = "ADC";

esp_adc_cal_characteristics_t init_adc(){
	esp_adc_cal_characteristics_t characteristics;
	ESP_ERROR_CHECK(adc1_config_width(ADC_WIDTH_BIT_12));
	ESP_ERROR_CHECK(adc1_config_channel_atten(ADC1_CHANNEL_0,ADC_ATTEN_DB_0));
	esp_adc_cal_get_characteristics(V_REF, ADC_ATTEN_DB_0, ADC_WIDTH_BIT_12, &characteristics);
	return characteristics;
}

uint32_t readadc(int adc_chan, esp_adc_cal_characteristics_t chara){
	return adc1_to_voltage(adc_chan,&chara);
}


#include "turret.h"

static const char *TAG = "TURRET";

#define PIN_LASER 16
#define PIN_RECEP 17
void init_turret(){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM0A, PIN_SERVO));
	mcpwm_config_t conf0;
	conf0.frequency = 50;
	conf0.cmpr_a = 15;
	conf0.cmpr_b = 15;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_0, &conf0);

        //gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);
        //gpio_isr_handler_add(PIN_TURRET, gpio_isr_handler, (void*) GPIO_INPUT_IO_0);
	return;
}

void set_angle(int angle){
	float actangle = (float)angle;
	uint32_t dutycycle;
	if(actangle > 180){
		actangle = 180.0;
	} else if (actangle < 0){
		actangle = 0.0;
	}
	dutycycle = (uint32_t)(actangle * (14000.0/180.0) + 1000.0);
	mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_A, dutycycle);
	return;
}

void fire_laser(){

}

void hit_register_isr(){
	
}

#include "turret.h"

static const char *TAG = "TURRET";

void init_turret(){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM0A, 27));
	mcpwm_config_t conf0;
	conf0.frequency = 50;
	conf0.cmpr_a = 0;
	conf0.cmpr_b = 0;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_0, &conf0);

        //gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);
        //gpio_isr_handler_add(PIN_TURRET, gpio_isr_handler, (void*) GPIO_INPUT_IO_0);
	return;
}

void set_angle(uint32_t angle){
	uint32_t dutycycle;
	dutycycle = (uint32_t)(angle *3000/360 + 1000.0);
	mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_A,dutycycle);
	return;
}

void fire_laser(){

}

void hit_register_isr(){
	
}

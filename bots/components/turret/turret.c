#include "turret.h"
//INPUT PINS
static const uint64_t photorec = (1 <<1);
//OUTPUT PINS
static const int  topled = 3;
static const int  laser = 2;
static const int  debugR = 4;
static const int  debugG = 16;
static const int  recep = 1;

static const char *TAG = "TURRET";
void init_turret(char * health){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM0A, 27));
	mcpwm_config_t conf0;
	conf0.frequency = 50;
	conf0.cmpr_a = 0;
	conf0.cmpr_b = 0;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_0, &conf0);

	gpio_install_isr_service(ESP_INTR_FLAG_EDGE);
}

void canhit(char * health){
	gpio_isr_handler_add(recep, hit_register_isr, health);
}
void set_angle(uint32_t angle){
	uint32_t dutycycle;
	dutycycle = (uint32_t)(angle *3000/360 + 1000.0);
	mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_A,dutycycle);
}

void top_on(bool on){
	if(on){
		gpio_set_level(topled,1);
		gpio_set_level(debugR,1);
	}else{
		gpio_set_level(topled,0);
		gpio_set_level(debugR,0);
	}
}
void fire_laser(bool fire){
	if(fire){
		gpio_set_level(laser,1);
	}else{
		gpio_set_level(laser,0);
	}
}

void hit_register_isr(char * arg){
	(*arg )--;
	gpio_isr_handler_remove(recep);
}

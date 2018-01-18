#include "motor.h"

static const char *TAG = "MOTOR";

void init_motors(){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, PIN1_MOTOR_1));
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0B, PIN2_MOTOR_1));
	mcpwm_config_t conf0;
	conf0.frequency = 50;
	conf0.cmpr_a = 5;
	conf0.cmpr_b = 5;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &conf0);

	return;
}

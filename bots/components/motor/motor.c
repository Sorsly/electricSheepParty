#include "motor.h"

static const char *TAG = "MOTOR";
#define PIN1_MOTOR_1 15
#define PIN2_MOTOR_1 16
#define PIN1_MOTOR_2 17
#define PIN2_MOTOR_2 18


void init_motors(){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, PIN1_MOTOR_1));
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0B, PIN2_MOTOR_1));
	
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1A, PIN1_MOTOR_2));
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1B, PIN2_MOTOR_2));

	mcpwm_config_t conf0;
	conf0.frequency = 1000;
	conf0.cmpr_a = 0;
	conf0.cmpr_b = 0;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &conf0);

	mcpwm_config_t conf1;
	conf1.frequency = 1000;
	conf1.cmpr_a = 0;
	conf1.cmpr_b = 0;
	conf1.duty_mode = MCPWM_DUTY_MODE_0;
	conf1.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_1, &conf1);
	return;
}

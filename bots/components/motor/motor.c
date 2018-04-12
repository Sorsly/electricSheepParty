/* functions for controlling the motors
 *
 *
 */

#include "motor.h"

static const char *TAG = "MOTOR";
#define PIN1_MOTOR_1 32
#define PIN2_MOTOR_1 33
#define PIN1_MOTOR_2 26
#define PIN2_MOTOR_2 25


//Initialize the motos
void init_motors(){
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, PIN1_MOTOR_1));
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0B, PIN2_MOTOR_1));
	
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1A, PIN1_MOTOR_2));
	ESP_ERROR_CHECK(mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1B, PIN2_MOTOR_2));

	mcpwm_config_t conf0;
	conf0.frequency = 100;
	conf0.cmpr_a = 0;
	conf0.cmpr_b = 0;
	conf0.duty_mode = MCPWM_DUTY_MODE_0;
	conf0.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &conf0);

	mcpwm_config_t conf1;
	conf1.frequency = 100;
	conf1.cmpr_a = 0;
	conf1.cmpr_b = 0;
	conf1.duty_mode = MCPWM_DUTY_MODE_0;
	conf1.counter_mode = MCPWM_UP_COUNTER;
	mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_1, &conf1);

}

//Helper functions for moving right and left
void right_ctl(bool forward,uint8_t dutycycle){
    if(forward) {
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, dutycycle);
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_B, 0);
	}else{
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, 0);
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_B, dutycycle);
	}

}

void left_ctl(bool forward,uint8_t dutycycle){
	if(forward) {
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_A, 0);
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_B, dutycycle);
	}else{
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_A, dutycycle);
        mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_B, 0);
	}

}

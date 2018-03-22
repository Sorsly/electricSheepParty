#include <driver/mcpwm.h>
#include <soc/mcpwm_reg.h>
#include <soc/mcpwm_struct.h>

void init_motors();
void left_ctl(bool,uint8_t);
void right_ctl(bool,uint8_t);

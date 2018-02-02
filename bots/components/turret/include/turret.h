#include <driver/mcpwm.h>
#include <soc/mcpwm_reg.h>
#include <soc/mcpwm_struct.h>

void init_turret();
void set_angle(uint32_t);
void fire_laser();
void hit_register_isr();

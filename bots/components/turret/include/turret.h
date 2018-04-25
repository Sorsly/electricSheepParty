#include <driver/mcpwm.h>
#include <soc/mcpwm_reg.h>
#include <soc/mcpwm_struct.h>

void init_turret(bool * );
void set_angle(uint32_t);
void fire_laser(bool);
void hit_register_isr(bool *);
void canhit(bool *);
void top_on(bool);

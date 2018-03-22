#include <driver/mcpwm.h>
#include <soc/mcpwm_reg.h>
#include <soc/mcpwm_struct.h>

void init_turret(char *);
void set_angle(uint32_t);
void fire_laser(bool);
void hit_register_isr(char*);
void canhit(char *);
void top_on(bool);

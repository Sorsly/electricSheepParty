#include <driver/mcpwm.h>
#include <soc/mcpwm_reg.h>
#include <soc/mcpwm_struct.h>

void init_turret(uint8_t * );
void set_angle(uint32_t);
void fire_laser(bool);
void hit_register_isr(uint8_t *);
void canhit(uint8_t *);
void top_on(bool);

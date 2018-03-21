#include <stdint.h>
void init_i2c(void);
void i2c_comm(void);
void writemag(uint8_t, uint8_t);
uint8_t readmag(uint8_t);
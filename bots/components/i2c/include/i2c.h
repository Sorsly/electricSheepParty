#include <stdint.h>
void init_i2c(void);
void i2c_comm(void);
void writemag(uint8_t, uint8_t);
double getRawTheta(double,double,double *,double *);
uint8_t readmag(uint8_t);
void readMagData(uint8_t *);
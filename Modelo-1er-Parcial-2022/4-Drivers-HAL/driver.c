#include "driver.h"

void AbrirValvulaAgua(void)
{
    uint8_t mask = 0x1;
    *registro_hardware |= (mask << 7);
}
void CerrarValvulaAgua(void)
{
    uint8_t mask = 0x1;
    *registro_hardware &= ~(mask << 7);
}
void ActivarMotorLavado(void)
{
    uint8_t mask = 0x1;
    *registro_hardware &= ~(mask << 5);
}
void ApagarMotorLavado(void)
{
    uint8_t mask = 0x1;
    *registro_hardware |= (mask << 5);
}
void ActivarMotorCentrifugado(void)
{
    uint8_t mask = 0x3;
    *registro_hardware |= (mask);
}
void ApagarMotorCentrifugado(void)
{
    uint8_t mask = 0x3;
    *registro_hardware &= ~mask;
}
void set_bit(uint8_t *reg, uint8_t bit, uint8_t state)
{
    uint8_t mask = 0x1;

    if (state == 1)
        *reg |= (mask << bit);
    else
        *reg &= ~(mask << bit);
}
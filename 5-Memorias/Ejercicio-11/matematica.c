#include "matematica.h"

__inline int32_t Sumar_Array(int16_t *x, int16_t xn)
{
    int32_t suma = 0;
    for (int16_t i = 0; i < xn; i++)
    {
        suma += x[i];
    }
    return suma;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Realizar un programa que permita calcular el tamaño de un puntero a entero de 8 bits,
16, 32 bits, float y double. Mostrar en pantalla cada uno de los tamaños.
*/

int main(int argc, char const *argv[])
{
    int8_t *ptr_int8;
    int16_t *ptr_int16;
    float *ptr_float;

    printf("\n Tamaño de ptr_int8 %d", sizeof(ptr_int8));
    printf("\n Tamaño de ptr_int16 %d", sizeof(ptr_int16));
    printf("\n Tamaño de ptr_float %d", sizeof(ptr_float));

    printf("\n Tamaño de *ptr_int8 %d", sizeof(*ptr_int8));
    printf("\n Tamaño de *ptr_int16 %d", sizeof(*ptr_int16));
    printf("\n Tamaño de *ptr_float %d", sizeof(*ptr_float));

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Realizar una función que me permita realizar la sumatoria de un array de enteros con
signo de 16 bits y devuelva un entero de 32 bits. Debe recibir la dirección del array a
sumar y su largo. El prototipo es el siguiente:
int32_t Sumar_Array (int16_t* x, int16_t xn);
*/

#define NMAX 5

/// @brief Realiza la suma de elementos del array
/// @param x Array
/// @param xn NMAX del array
/// @return Suma de elementos
int32_t Sumar_Array(int16_t *x, int16_t xn);

int main(int argc, char const *argv[])
{
    int32_t (*ptr_funcion)(int16_t *, int16_t);
    ptr_funcion = &Sumar_Array;

    int16_t Array[NMAX] = {1, 2, 3, 4, 5};
    int32_t resultado = Sumar_Array(Array, NMAX);

    printf("Funcion adress: \t%10p\n", ptr_funcion);

    printf("\n Resultado %d", resultado);

    exit(EXIT_SUCCESS);
}

int32_t Sumar_Array(int16_t *x, int16_t xn)
{
    int32_t suma = 0;
    for (int16_t i = 0; i < xn; i++)
    {
        suma += x[i];
    }
    return suma;
}
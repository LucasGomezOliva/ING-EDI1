#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define NMAX 10

uint16_t promedio(uint16_t muestra);

int main(int argc, char const* argv[])
{
    printf("\nEl promedio es: %d", (uint16_t)promedio(1));

    printf("\nEl promedio es: %d", (uint16_t)promedio(2));

    printf("\nEl promedio es: %d", (uint16_t)promedio(3));

    printf("\nEl promedio es: %d", (uint16_t)promedio(4));

    printf("\nEl promedio es: %d", (uint16_t)promedio(5));

    printf("\nEl promedio es: %d", (uint16_t)promedio(6));

    printf("\nEl promedio es: %d", (uint16_t)promedio(7));

    printf("\nEl promedio es: %d", (uint16_t)promedio(8));

    printf("\nEl promedio es: %d", (uint16_t)promedio(9));

    printf("\nEl promedio es: %d", (uint16_t)promedio(10));

    printf("\nEl promedio es: %d", (uint16_t)promedio(11));

    exit(EXIT_SUCCESS);
}

/// @brief Realizo el promedio
/// @param muestra Nuevo valor a agregar para el promedio
/// @return Promedio como uint16_t
uint16_t promedio(uint16_t muestra)
{
    static uint16_t Array[NMAX];

    static uint16_t n = 1; // cantidad de elementos agregados

    uint16_t suma = 0;

    if (n == 1)
    {
        for (int16_t i = 0; i < NMAX; i++)
        {
            Array[i] = 0;
        }
    }

    for (int16_t i = 0; i < NMAX - 1; i++)
    {
        Array[i] = Array[i + 1];
    }

    n++;

    Array[NMAX - 1] = muestra;

    for (int16_t i = 0; i < NMAX; i++)
    {
        suma += Array[i];
    }
    return suma/NMAX;
}

/*

B - para cmabiar el numero de posiciones N de una forma rapida utilizo el define ya que al utilizar esto se reemplazaran por su valor en todo el codigo

C - declaro el array dentro de la funcion y lo delcaro como static para que de esta forma el alcance del array este limitado a la funcion
    promedio y a su vez puede almacenar los valores por cada llamado de la funcion.

*/
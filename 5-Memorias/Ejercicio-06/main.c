#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include "colaDatos_t.h"

/*
Implementar un set de funciones para manejo de una cola de datos FIFO de variables
del tamaño de un byte. Administrar todas las variables de la cola de datos desde una
estructura colaDatos_t. Realizar un programa de prueba que permita ingresar y mostrar
datos a través de las funciones implementadas.
*/

int main(int argc, char const *argv[])
{
    int8_t n_max = 10;

    int8_t item = 12;

    colaDatos_t *var_colaDatos_t = (colaDatos_t *)NewColaDatos(n_max);

    if (var_colaDatos_t == NULL)
    {
        exit(EXIT_SUCCESS);
    }

    Enqueue(var_colaDatos_t, item);

    item = 14;

    Enqueue(var_colaDatos_t, item);

    printcolaDatos_t(var_colaDatos_t);

    printf("%d", Dequeue(var_colaDatos_t));

    printf("%d", Dequeue(var_colaDatos_t));

    printf("%d", Dequeue(var_colaDatos_t));

    freememory(var_colaDatos_t);

    exit(EXIT_SUCCESS);
}

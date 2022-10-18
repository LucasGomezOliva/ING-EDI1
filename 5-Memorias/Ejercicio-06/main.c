#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include"colaDatos_t.h"

/*
Implementar un set de funciones para manejo de una cola de datos FIFO de variables
del tamaño de un byte. Administrar todas las variables de la cola de datos desde una
estructura colaDatos_t. Realizar un programa de prueba que permita ingresar y mostrar
datos a través de las funciones implementadas.
*/

int main(int argc, char const *argv[])
{
    int8_t n_max = 10;
    
    colaDatos_t* var_colaDatos_t = NewColaDatos(n_max);

    
    exit(EXIT_SUCCESS);
}

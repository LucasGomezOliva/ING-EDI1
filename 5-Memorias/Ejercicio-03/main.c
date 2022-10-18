#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Imprimir en pantalla el puntero edata. Que expresa este valor? Comparar este valor con
los punteros a función declarados en el punto anterior. Pertenecen al mismo segmento?
Declarar una variable local al main int32_t var y comparar su valor con el segmento
edata. Declarar una variable global int32_t varGlobal y comparar con el valor de edata.
*/

extern char edata;
int32_t varGlobal;

int main(int argc, char const *argv[])
{
    int32_t var;

    printf("VarGlobal adress:   \t%10p\n", &varGlobal);
    printf("Var adress:         \t%10p\n", &var);
    printf("Etext adress:       \t%10p\n", &edata);

    exit(EXIT_SUCCESS);
}
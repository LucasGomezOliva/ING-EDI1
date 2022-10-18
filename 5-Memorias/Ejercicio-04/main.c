#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Imprimir en pantalla el puntero end. Qué expresa este valor? Comparar con las
direcciones de memoria de las variables locales y globales del punto anterior. Inicializar
la variable varGlobal en la línea de su declaración y volver a comprobar con el valor del
puntero end
*/

extern char end;
int32_t varGlobal = 15;

int main(int argc, char const *argv[])
{
    printf("VarGlobal adress:   \t%10p\n", &varGlobal);
    printf("Etext adress:       \t%10p\n", &end);

    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Imprimir en pantalla el puntero etext. Que expresa este valor? Realizar una función
int32_t Suma(int32_t a, int32_t b) y generar un puntero que apunte a ella. Imprimir esa
dirección y la dirección del main, comparar con el contenido de etext.
*/

/// @brief Suma 2 variables int32_t
/// @param a Variable a
/// @param b Variable b
/// @return Resultado
int32_t Suma(int32_t a, int32_t b);

extern char etext;

int main(int argc, char const *argv[])
{
    int32_t (*ptr_funcion)(int32_t, int32_t);
    int (*ptr_main)(int, char **);

    ptr_funcion = &Suma;
    ptr_main = &main;

    printf("Main adress: \t%10p\n", ptr_main);
    printf("Funcion adress: \t%10p\n", ptr_funcion);
    printf("Etext adress: \t%10p\n", &etext);

    exit(EXIT_SUCCESS);
}

int32_t Suma(int32_t a, int32_t b)
{
    return a + b;
}
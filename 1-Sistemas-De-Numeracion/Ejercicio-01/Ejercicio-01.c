// Ejercicio 1 : Tipos de dato y su tamaño en bits.
//

//Realizar un programa en el que se declare una variable de cada tipo char, short int, int,
//long int, long long int, float y double, nombrándolas por su tipo, por ejemplo var_char,
//var_short_int, etc.Crear además 7 variables del tipo short int llamadas tam_char, tam_short_int,
//tam_int, etc.En estas variables se guardará el tamaño de cada una de las variables definidas en
//un principio.Mostrar el tamaño de cada variable. (utilizar sizeof()).¿Cambia el tamaño de las
//variables si estas son unsigned ?


#include <stdio.h>

int main()
{
    char var_char = 'c';
    short int var_short_int = 2;
    int var_int = 2;
    long int var_long_int = 2;
    long long int var_long_long_int = 2;
    float var_float = 2.2;
    double var_double = 2;

    short int tam_char = sizeof(var_char);
    short int tam_short_int = sizeof(var_short_int);
    short int tam_int = sizeof(var_int);
    short int tam_long_int = sizeof(var_long_int);
    short int tam_long_long_int = sizeof(var_long_long_int);
    short int tam_float = sizeof(var_float);
    short int tam_double = sizeof(var_double);

    printf("Char %d \n", tam_char);
    printf("Short int %d \n", tam_short_int);
    printf("Int %d \n", tam_int);
    printf("Long int %d \n", tam_long_int);
    printf("Long long int %d \n", tam_long_long_int);
    printf("Float %d \n", tam_float);
    printf("Double %d \n", tam_double);

    return 0;
}
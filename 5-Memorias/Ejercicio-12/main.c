#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Agregar una función que devuelva un entero sin signo de 16 bits que me permita contar
la cantidad de veces que fue llamada la misma. Comprobar el lugar de memoria que
ocupan cada una de las variables creadas en el mapa general. El prototipo es el
siguiente:
uint16_t Cuenta_Accesos (void);
*/

uint16_t count = 0;

uint16_t Cuenta_Accesos(void);

int main(int argc, char const *argv[])
{

    printf("%d llamados\t", (uint16_t)Cuenta_Accesos());
    printf("Count adress:   \t%10p\n", &count);
    printf("%d llamados\t", (uint16_t)Cuenta_Accesos());
    printf("Count adress:   \t%10p\n", &count);
    printf("%d llamados\t", (uint16_t)Cuenta_Accesos());
    printf("Count adress:   \t%10p\n", &count);

    exit(EXIT_SUCCESS);
}

uint16_t Cuenta_Accesos(void)
{
    return ++count;
}
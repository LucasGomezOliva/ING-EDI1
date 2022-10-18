#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

/*
Modificar la función int32_t Suma(int32_t a, int32_t b) para imprimir la dirección de los
argumentos a y b. Realizar una llamada desde el main a la función Suma, utilizando
variables v1 y v2 para el pasaje del valor de los argumentos. Comparar las direcciones
de v1 y v2 con las de a y b. Qué conclusiones pueden extraerse de esto?
*/

/// @brief Suma 2 variables int32_t
/// @param a Variable a
/// @param b Variable b
/// @return Resultado
int32_t Suma(int32_t a, int32_t b);

int main(int argc, char const *argv[])
{
    int32_t v1 = 10;
    int32_t v2 = 15;

    printf("V1 adress:         \t%10p\n", &v1);
    printf("V2 adress:         \t%10p\n", &v2);

    int32_t resultado = Suma(v1, v2);

    printf("Resultado adress:   \t%10p\n", &resultado);

    exit(EXIT_SUCCESS);
}

int32_t Suma(int32_t a, int32_t b)
{
    printf("a adress:         \t%10p\n", &a);
    printf("b adress:         \t%10p\n", &b);

    return a + b;
}
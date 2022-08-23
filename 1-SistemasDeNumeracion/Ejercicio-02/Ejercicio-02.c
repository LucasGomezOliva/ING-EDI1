// Ejercicio 2 :Tipos de dato del header <stdint.h>
//

//Repetir el programa anterior para los tipos definidos en la librería <stdint.h> : int8_t,
//int16_t, int32_t, int64_t.¿Cambia el tamaño de las variables si estas son unsigned(es decir,
//uint8_t, uint16_t, …) ?


#include <stdio.h>
#include<stdint.h>

int main()
{
    int8_t var_int8_t = 1;
    int16_t var_int16_t = 1;
    int32_t var_int32_t = 1;
    int64_t var_int64_t = 1;

    short int tam_int8_t = sizeof(var_int8_t);
    short int tam_int16_t = sizeof(var_int16_t);
    short int tam_int32_t = sizeof(var_int32_t);
    short int tam_int64_t = sizeof(var_int64_t);

    printf("Int8_t %d \n", tam_int8_t);
    printf("Int16_t %d \n", tam_int16_t);
    printf("Int32_t %d \n", tam_int32_t);
    printf("Int64_t %d \n", tam_int64_t);

    return 0;
}
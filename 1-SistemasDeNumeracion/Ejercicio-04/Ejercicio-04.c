// Ejercicio 4 : Conversión a binario
//

//Realizar una función llamada ImprimirBin8 que reciba un entero de 8 bits e imprima en
//pantalla su representación en binario.Luego agregue una columna al ejercicio anterior, donde se
//muestre la representación de cada número también en binario.El prototipo es el siguiente :
//
//void ImprimirBin8(int8_t num);
//
//a) Realizar la función dividiendo sucesivamente por 2 y obteniendo el resto en cada
//división.Se sugiere usar el operador % para obtener el resto de la división entre 2 números
//enteros.
//
//b) Realizar además las versiones de 16 y 32 bits de la misma función.

#include <stdio.h>
#include<stdint.h>
#include<math.h>

void ImprimirBin8(int8_t num);
void ImprimirBin16(int16_t num);
void ImprimirBin32(int32_t num);

int main()
{
    int8_t var_int8_t = 9;
    int16_t var_int16_t = 9;
    int32_t var_int32_t = 9;

    short int tam_int8_t = sizeof(var_int8_t);
    short int tam_int16_t = sizeof(var_int16_t);
    short int tam_int32_t = sizeof(var_int32_t);

    printf("\n Tam Int8_t: %d", tam_int8_t);
    printf("\n Tam Int16_t: %d", tam_int16_t);
    printf("\n Tam Int32_t: %d", tam_int32_t);

    ImprimirBin8(var_int8_t);
    ImprimirBin16(var_int16_t);
    ImprimirBin32(var_int32_t);

    return 0;
}

void ImprimirBin8(int8_t num) {
    long unsigned int binario = 0;
    long unsigned int cant = 0;
    int8_t resto;
    int8_t numero = num;

    while (numero > 0) {    
        resto = numero % 2;
        numero = numero / 2;
        binario = binario + resto * pow(10, cant);
        cant++;
    }
    printf("\n Numero en binario: %d", binario);
}

void ImprimirBin16(int16_t num) {
    long unsigned int binario = 0;
    long unsigned int cant = 0;
    int16_t resto;
    int16_t numero = num;

    while (numero > 0) {
        resto = numero % 2;
        numero = numero / 2;
        binario = binario + resto * pow(10, cant);
        cant++;
    }
    printf("\n Numero en binario: %d", binario);
}

void ImprimirBin32(int32_t num) {
    long unsigned int binario = 0;
    long unsigned int cant = 0;
    int32_t resto;
    int32_t numero = num;

    while (numero > 0) {
        resto = numero % 2;
        numero = numero / 2;
        binario = binario + resto * pow(10, cant);
        cant++;
    }
    printf("\n Numero en binario: %d", binario);
}
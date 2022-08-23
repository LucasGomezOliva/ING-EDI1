// Ejercicio 5 :  Conversión binario a decimal
//

//Realizar una función llamada BinarioDecimal que reciba un string con los bits de un
//número binario y devuelva un entero de 32 bits con el valor del mismo.El prototipo de la
//función es el siguiente :
//int32_t BinarioDecimal(char* cadena_numero);
//Generar un programa que solicite al usuario un número en binario, y lo muestre en
//pantalla en decimal, binario y octal utilizando la función anterior.

#include <stdio.h>
#include<stdint.h>
#include<math.h>

int32_t BinarioDecimal(char* cadena_numero);

int main()
{
    char cadena[100] = "101";

    int32_t NumeroDecimal;

    printf("\n Numero:%s \n Numero en decimal: %d",cadena,BinarioDecimal(cadena));

    return 0;
}

int32_t BinarioDecimal(char* cadena_numero) {

    int32_t var_int32_t = 0;

    int32_t pesos = 1;

    unsigned int TamCadena = strlen(cadena_numero);

    for (unsigned int i = TamCadena; i > 0; i--) {
        if (cadena_numero[i - 1] == '1') {
            var_int32_t += pesos;
        }
        pesos = pesos * 2;
    }
    return var_int32_t;
}

//int32_t BinarioDecimal(char* cadena_numero) {
//    int32_t aDevolver = 0;
//    int i = strlen(cadena_numero) - 1;
//    int aux = 0;
//    while (i != -1) {
//        aDevolver += ((int)cadena_numero[i] - (int)'0') * pow(2, aux);
//        i--;
//        aux++;
//    }
//    return aDevolver;
//}
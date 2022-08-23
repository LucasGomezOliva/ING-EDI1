// Ejercicio 7 :  Overflow en operaciones y “wrap around”. Carry y borrow
//

//a) Cree tres variables no signadas de 16 bits, num1, num2 y resultado.En las primeras 2
//guarde los números en hexadecimal num1 = 0x8000; y num2 = 0x0001; .Luego asigne a la
//variable resultado la resta num1 - num2; .A continuación muestre la variable num1 en
//hexadecimal, como entero signado y como entero no signado.Hacer lo mismo para num2 y para
//la variable resultado.Viendo los resultados obtenidos, se generó overflow tras la operación ?
//cómo podemos darnos cuenta de esto ?
//
//b) Repetir lo mismo pero asignando los valores num1 = 0x7FFF; y num2 = 0x0001;
//Luego asigne resultado = num1 + num2; Muestre las 3 variables en los 3 formatos y saque
//conclusiones respecto a la validez de los resultados.¿Hubo overflow ?
//
//c) Asignar los valores num1 = 0xF000; y num2 = 0xFF01; y guardar en resultado la
//suma de las dos variables.Mostrar las 3 variables en los 3 formatos anteriores.Sacar
//conclusiones de los resultados.¿Hubo overflow, carry o nada ?
//
//d) Asignar los valores num1 = 0x0011; y num2 = 0xFF01; y guardar en resultado la
//suma de las dos variables.Mostrar las 3 variables en los 3 formatos anteriores.Sacar
//conclusiones de los resultados.¿Hubo overflow, carry, borrow o nada ?

#include <stdio.h>
#include<stdint.h>

void Imprimir(uint16_t num1, uint16_t num2, uint16_t resultado);

int main()
{
    uint16_t num1 = 0x8000;
    uint16_t num2 = 0x0001;
    uint16_t resultado = num1 - num2;

    Imprimir(num1, num2, resultado);

    num1 = 0x7FFF;
    num2 = 0x0001;
    resultado =  num1 + num2;

    Imprimir(num1, num2, resultado);

    num1 = 0xF000;
    num2 = 0xFF01;
    resultado = num1 + num2;

    Imprimir(num1, num2, resultado);

    num1 = 0x0011;
    num2 = 0xFF01;
    resultado = num1 + num2;

    Imprimir(num1, num2, resultado);

    return 0;
}

void Imprimir(uint16_t num1, uint16_t num2, uint16_t resultado) {
    printf("\n\n Hexadecimal");
    printf("\n Num 1 = 0x%x", num1);
    printf("\n Num 2 = 0x%x", num2);
    printf("\n Resultado = 0x%x", resultado);

    printf("\n\n Entero no signo");
    printf("\n Num 1 = %u", (uint16_t)num1);
    printf("\n Num 2 = %u", (uint16_t)num2);
    printf("\n Resultado = %u", (uint16_t)resultado);

    printf("\n\n Entero con signo");
    printf("\n Num 1 = %d", (int16_t)num1);
    printf("\n Num 2 = %d", (int16_t)num2);
    printf("\n Resultado = %d", (int16_t)resultado);
}
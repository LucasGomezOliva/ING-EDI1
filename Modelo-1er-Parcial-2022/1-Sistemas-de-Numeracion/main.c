
#include <stdio.h>
#include<stdint.h>
#include<math.h>

int main()
{
	/*
	Se almacenaron dos números en una PC, de la siguiente manera: int16_t num1 =
	0xAFAF, num2 = 0x14BD;
	*/

	int16_t num1 = 0xAFAF;
	int16_t	num2 = 0x14BD;

	/* 
	Exprese el contenido de estas variables en binario.Exprese también su valor
	numérico en decimal (expresado como signo y módulo) interpretando las variables
	según su tipo.
	*/

	printf("\nNumero 1 int16_t en decimal: %d",num1);
	printf("\nNumero 2 int16_t en decimal: %d",num2);

	/*
	Muestre cómo realiza la siguiente operación en binario y compruebe su resultado
	en decimal. Verifique si hubo overflow, y explique por qué hubo o por qué no:
	int16_t resultado = 0x0000;
	resultado = num1 - num2;
	*/

	int16_t resultado = 0x0000;

	resultado = num1 - num2;

	printf("\nResultado: %d", resultado);

	/*
	Cómo se guardaría el contenido de la variable num1 dentro de una variable de 32
	bits del tipo int32_t? Y dentro de una variable del tipo uint32_t?
	*/

	int32_t var_int32_num1 = num1;
	uint32_t var_uint32_num1 = num1;

	printf("\nNumero 1 int32_t en decimal: %d", num1);
	printf("\nNumero 1 uint32_t en decimal: %d", num1);

	return 0;
}
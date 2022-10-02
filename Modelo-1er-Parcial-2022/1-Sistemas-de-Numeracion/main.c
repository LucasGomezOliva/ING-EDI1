
#include <stdio.h>
#include<stdint.h>
#include<math.h>

int main()
{
	/*
	Se almacenaron dos n�meros en una PC, de la siguiente manera: int16_t num1 =
	0xAFAF, num2 = 0x14BD;
	*/

	int16_t num1 = 0xAFAF;
	int16_t	num2 = 0x14BD;

	/* 
	Exprese el contenido de estas variables en binario.Exprese tambi�n su valor
	num�rico en decimal (expresado como signo y m�dulo) interpretando las variables
	seg�n su tipo.
	*/

	printf("\nNumero 1 int16_t en decimal: %d",num1);
	printf("\nNumero 2 int16_t en decimal: %d",num2);

	/*
	Muestre c�mo realiza la siguiente operaci�n en binario y compruebe su resultado
	en decimal. Verifique si hubo overflow, y explique por qu� hubo o por qu� no:
	int16_t resultado = 0x0000;
	resultado = num1 - num2;
	*/

	int16_t resultado = 0x0000;

	resultado = num1 - num2;

	printf("\nResultado: %d", resultado);

	/*
	C�mo se guardar�a el contenido de la variable num1 dentro de una variable de 32
	bits del tipo int32_t? Y dentro de una variable del tipo uint32_t?
	*/

	int32_t var_int32_num1 = num1;
	uint32_t var_uint32_num1 = num1;

	printf("\nNumero 1 int32_t en decimal: %d", num1);
	printf("\nNumero 1 uint32_t en decimal: %d", num1);

	return 0;
}
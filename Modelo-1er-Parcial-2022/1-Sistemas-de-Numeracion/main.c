
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	/*
	Se almacenaron dos n�meros en una PC, de la siguiente manera: int16_t num1 =
	0xAFAF, num2 = 0x14BD;
	*/

	int16_t num1 = 0xAFAF;
	int16_t num2 = 0x14BD;

	/*
	int16_t num1 = 0xAFAF = 0b 1010 1111 1010 1111

	CA2(num1) = 0b 0101 0000 0101 0001 = -20561

	int16_t num2 = 0x14BD = 0b 0001 0100 1011 1101 = 5309
	*/

	/*
	Exprese el contenido de estas variables en binario.Exprese tambi�n su valor
	num�rico en decimal (expresado como signo y m�dulo) interpretando las variables
	seg�n su tipo.
	*/

	printf("\nNumero 1 int16_t en decimal: %d", num1);
	printf("\nNumero 2 int16_t en decimal: %d", num2);

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
	resultado = num1 - num2;

	num1 = 0b 1010 1111 1010 1111 = -20561

	num2 = 0b 0001 0100 1011 1101 = 5309

	CA2(num2) = 0b 1110 1011 0100 0011

		0b 1010 1111 1010 1111
	+   0b 0001 0100 1011 1101
	---------------------------
      0b 1 1001 1010 1111 0010

	resultado = 0b 1001 1010 1111 0010

	CA2(resultado) = 0b 0110 0101 0000 1110 = -25870
	*/

	/*
	C�mo se guardar�a el contenido de la variable num1 dentro de una variable de 32
	bits del tipo int32_t? Y dentro de una variable del tipo uint32_t?
	*/

	int32_t var_int32_num1 = num1;
	uint32_t var_uint32_num1 = num1;

	printf("\nNumero 1 int32_t en decimal: %d", num1);
	printf("\nNumero 1 uint32_t en decimal: %d", num1);

	/*

	int16_t num1 = 0xAFAF = 0b 1010 1111 1010 1111

	CA2(num1) = 0b 0101 0000 0101 0001 = -20561

	int32_t var_int32_num1 = num1

	int32_t var_int32_num1 = 0xFFFAFAF =  0b 1111 1111  1111 1111 1010 1111 1010 1111

	uint32_t var_uint32_num1 = num1;

	uint32_t var_uint32_num1 = 0x0000AFAF = 0b 0000 0000 0000 0000 1010 1111 1010 1111 = 44975;

	*/

	return 0;
}
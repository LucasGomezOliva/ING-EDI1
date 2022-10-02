/*
*
a.Escribir el c�digo de la siguiente m�quina de estados, su funci�n de
inicializaci�n, declaraci�n de variables necesarias y tipos de datos. Se cuenta
con un archivo driver.h con las siguientes funciones y variables:

b. Escribir la estructura en un programa main que pueda ejecutar �n� m�quinas
de estado en paralelo

*/

#include <stdio.h>
#include <math.h>
#include "MDE.h"

int main()
{
	Maquina_de_Estado status_maquina_1 = RESET;
	Maquina_de_Estado status_maquina_2 = RESET;

	while (1)
	{
		Maquina(status_maquina_1);
		Maquina(status_maquina_2);
	}
	return 0;
}
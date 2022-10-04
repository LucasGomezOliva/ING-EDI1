/*
Se pide implementar las funciones del archivo driver.h en el archivo driver.c,
de acuerdo al siguiente registro de 8 bits:

uint8_t *registro_hardware;

d7 d6 d5 d4 d3 d2 d1 d0

d7: al estar en 1, permite abrir la válvula de agua. Al estar en cero,
cierra la válvula de agua.

d5: al estar en 0, activa el motor de lavado. Al estar en 1, apaga el motor de lavado.

d1-d0: para activar el motor de centrifugado, se necesita la combinación 11.
Para apagarlo,la combinación 00. Las demás combinaciones son inválidas
*/

#include <stdio.h>
#include <math.h>
#include "driver.h"

int main(int argc, char const *argv[])
{
	AbrirValvulaAgua();
	CerrarValvulaAgua();
	ActivarMotorLavado();
	ApagarMotorLavado();
	ActivarMotorCentrifugado();
	ApagarMotorCentrifugado();
	return 0;
}
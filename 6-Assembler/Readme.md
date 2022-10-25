# ING-EDI1-Assembler

## Ejercicio 01 

Realice una subrutina (BUSCAR_MAX) que permita hallar el valor máximo a partir de un
array que contenga 10 números enteros. La definición de las variables será la siguiente:

ARRAY DB -4, 3, 5, 12, -5, 8, 8, 6, 0, 1

MAXIMO DB 0 2.

## Ejercicio 02

Realice una subrutina (CANTUNOS) que cuente la cantidad de bits en uno en el AL y
devuelva esa cantidad en el CL.

## Ejercicio 03

Utilice la subrutina anterior para calcular la cantidad de bits en uno en un array de 4
elementos como el siguiente:

ARRAY DB 00001111b, 00000000b, 11111111b, 01010101b

## Ejercicio 04

Implemente una rutina que cargue en un array los códigos de un contador anillo de
módulo 8 utilizando las instrucciones de desplazamiento:

00000001-00000010-000001000...hasta el 10000000

## Ejercicio 05

Realice una subrutina (BUSCAR_ESPACIOS) que busque la cantidad de espacios en
un array alfanumérico, y los cargue en una variable llamada ESPACIOS. El array
termina en $.

ARRAY DB ‘Esto es un array de prueba’,’$’

ESPACIOS DB 0

## Ejercicio 06

Realice una subrutina que convierta un número positivo de 8 bits en negativo (o
viceversa). Complemente a uno utilizando la instrucción NOT y luego sume uno con la
instrucción INC. Verifique el resultado con la instrucción NEG

## Ejercicio 07

Realizar una subrutina (CUENTA_PARES) que cuente cuántos números pares hay en
un array que se recibe por el registro BX y su largo en CL. Utilice las funciones de
rotación o desplazamiento. Devolver el valor del contador en CH.

## Ejercicio 08

Contar la cantidad de números negativos (rutina CUENTA_NEG) en un array recibido
por el registro BX y su largo en CL. Devolver el valor del contador en CH.

## Ejercicio 09

Calcular el promedio de un array (rutina PROMEDIO) en un array recibido en el registro
BX y su largo en CL. Devolver el valor del promedio en AX.
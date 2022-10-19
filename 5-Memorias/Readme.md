# ING-EDI1-Memorias

## Ejercicio 01 
Realizar un programa que permita calcular el tamaño de un puntero a entero de 8 bits,
16, 32 bits, float y double. Mostrar en pantalla cada uno de los tamaños.
## Ejercicio 02
Imprimir en pantalla el puntero etext. Que expresa este valor? Realizar una función
int32_t Suma(int32_t a, int32_t b) y generar un puntero que apunte a ella. Imprimir esa
dirección y la dirección del main, comparar con el contenido de etext.

## Ejercicio 03
Imprimir en pantalla el puntero edata. Que expresa este valor? Comparar este valor con
los punteros a función declarados en el punto anterior. Pertenecen al mismo segmento?
Declarar una variable local al main int32_t var y comparar su valor con el segmento
edata. Declarar una variable global int32_t varGlobal y comparar con el valor de edata.

## Ejercicio 04
Imprimir en pantalla el puntero end. Qué expresa este valor? Comparar con las
direcciones de memoria de las variables locales y globales del punto anterior. Inicializar
la variable varGlobal en la línea de su declaración y volver a comprobar con el valor del
puntero end.

## Ejercicio 05
Modificar la función int32_t Suma(int32_t a, int32_t b) para imprimir la dirección de los
argumentos a y b. Realizar una llamada desde el main a la función Suma, utilizando
variables v1 y v2 para el pasaje del valor de los argumentos. Comparar las direcciones
de v1 y v2 con las de a y b. Qué conclusiones pueden extraerse de esto?

## Ejercicio 06
Implementar un set de funciones para manejo de una cola de datos FIFO de variables
del tamaño de un byte. Administrar todas las variables de la cola de datos desde una
estructura colaDatos_t. Realizar un programa de prueba que permita ingresar y mostrar
datos a través de las funciones implementadas.

## Ejercicio 07
Repetir el punto anterior para la implementación de buffers circulares.

## Ejercicio 08
Implementar el código para manejar un doble buffer (ping-pong buffer) y un programa
de prueba que permita almacenar datos e imprimir el buffer de almacenamiento cada
vez que se llena.

## Ejercicio 09
Realizar una función que me permita realizar la sumatoria de un array de enteros con
signo de 16 bits y devuelva un entero de 32 bits. Debe recibir la dirección del array a
sumar y su largo. El prototipo es el siguiente:

int32_t Sumar_Array (int16_t* x, int16_t xn);

## Ejercicio 10
Guardar la función anterior en un archivo llamado “matematica.c”. Generar su
correspondiente header. Realizar una rutina de prueba con diferentes valores en un
programa.

## Ejercicio 11
Agregar una versión inline de la función del punto 3 a la librería “matematica”. Chequear
con el compilador que la función efectivamente sea inline. (utilizar __inline)

## Ejercicio 12
Agregar una función que devuelva un entero sin signo de 16 bits que me permita contar
la cantidad de veces que fue llamada la misma. Comprobar el lugar de memoria que
ocupan cada una de las variables creadas en el mapa general. El prototipo es el
siguiente:

uint16_t Cuenta_Accesos (void);

## Ejercicio 13
Realizar una rutina en el programa principal que me permita comprobar su
funcionamiento guardando los valores en una variable global. Comprobar la dirección
donde se guarda dicha variable.

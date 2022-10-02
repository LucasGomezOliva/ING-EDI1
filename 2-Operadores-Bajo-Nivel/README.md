# ING-EDI1-Combinacionales y operadores bajo nivel

## Ejercicio 1: 

Escribir un programa que permita resolver las siguientes operaciones. ¿Qué
conclusiones se pueden extraer? AND OR XOR

num1 = 0x00FF; num2 = 0x0012;

num1 = 0x005F; num2 = 0x00FA;

num1 = 0xAA55; num2 = 0x55AA;

num1 = 0xFFFF; num2 = 0x1212;


## Ejercicio 2:

Realizar una función llamada ImprimirBin8 que imprima el contenido en binario
de una variable de 8 bits, utilizando una máscara de bits y desplazamiento. Repetir esta función
para 16 y 32 bits. El prototipo de la función es el siguiente.

void ImprimirBin8 (int8_t num);

## Ejercicio 3:

Hacer una función ImprimirCamposFloat que permita imprimir los campos signo,
exponente y mantisa de una variable float. Además debe devolverlos en una estructura que
tenga estos tres campos. El prototipo debe ser el siguiente:

camposFloat_t ImprimirCamposFloat(float num);

Realizar asimismo una función que reciba los campos de un float en la estructura camposFloat_t
y devuelva la variable float y la imprima en pantalla. El prototipo debe ser el siguiente:

float ArmarImprimirFloat (camposFloat_t camposFloat);

## Ejercicio 4: Operadores lógicos

a) Operador Complemento (~): Definir una variable “var1” con signo de 8 bits y guardar el
número 53 en decimal. Definir otras dos variables con signo, y guardar en una el valor “-var1”
(con signo cambiado) y en la otra la variable var1 negada (operador ~). Imprimir las 3 variables
en decimal, hexadecimal y binario, y comparar resultados. ¿A qué se deben las diferencias?

b) Operador AND (&): Definir una variable de 16 bits “mascara” y guardar el valor en
hexadecimal 0xF0F0. Luego crear otra variable de 16 bits “var1” y asignar el número en
hexadecimal 0x5A5A. Realizar la operación AND entre las dos variables. Imprimir todos los
valores en hexadecimal y binario. Que diferencia hay con el operador &&? Y con el operador *?

c) Operador OR ( | ) : Definir una variable de 16 bits “var1” y guardar el valor 0xA0A0. Definir
una segunda “var2” y guardar el valor 0x00FF. Realizar la operación OR entre las dos variables,
e imprimir todos los valores en hexadecimal y binario. Que diferencia hay con el operador | |? Y
con el operador +?

d) Operador XOR ( ^ ) : Definir una variable de 16 bits y guardar el valor 0xFF00. Definir una
segunda variable y guardar el valor 0x6060. Realizar la operación XOR entre las dos y mostrar
todas los valores en hexadecimal y binario.

e) Crear 4 variables signadas de 16 bits var1 = 0x5A5A, var2 = 0xA5A5, res_log y res_bool.
Asignar a la variable res_log la operación and lógica (&) entre var1 y var2, y en la variable
res_bool la operación and booleana (&&) entre var1 y var2. ¿Qué diferencias se observa en el
resultado?

## Ejercicio 5:

El registro de control del ADC del microcontrolador LPC1769 es un registro de 32
bits que tiene la siguiente organización de bits:

a) Seleccionar la entrada 0 y 1 como entradas del ADC a convertir.
b) Leer el valor del clock como un valor entero.
c) Invertir el valor del flanco
d) Forzar el ADC para bajo consumo.

## Ejercicio 6:

Realizar las siguientes funciones de manejo de bits:

a) int32_t ApagarBit(uint32_t var, uint8_t nBit); // Recibe una variable de 32
bits, y un número entre 0 y 32. Debe forzar a cero el bit recibido en “nBit” de la variable
“var”. Devolver cero en caso que se haya realizado con éxito y uno en caso contrario.

b) int32_t EncenderBit(uint32_t var, uint8_t nBit); // Recibe una variable de 32
bits, y un número entre 0 y 32. Debe forzar a uno el bit recibido en “nBit” de la variable
“var”. Devolver cero en caso que se haya realizado con éxito y uno en caso contrario.

c) uint8_t ConsultarBit(uint32_t var, uint8_t nBit); // Recibe una variable de
32 bits, y un número entre 0 y 32. Debe devolver el estado del bit numero “nBit” de la
variable “var” y uno en caso contrario.

d) int32_t InvertirBit(uint32_t var, uint8_t nBit); // Recibe una variable de 32
bits, y un número entre 0 y 32. Debe cambiar el estado del bit recibido en “nBit” de la
variable “var”. Devolver cero en caso que se haya realizado con éxito y uno en caso
contrario.

## Ejercicio 7:Aplicación de operadores a nivel de bits:

El registro AD0CR de 32 bits del microcontrolador LPC1769 contiene todos los bits de control
del conversor analógico digital (A/D)integrado (UM10360 pág. 586).

Escribir una función que permita definir si el A/D esta encendido o apagado.
Devuelve 1 si el A/D está encendido y 0 si está apagado. Prototipo:

uint8_t Estado_AD (void);

Para realizar pruebas defina:

uint32_t AD0CR = 0x300001; y luego AD0CR = 0x100002;

Escribir una función que me permita apagar el A/D (forzar un cero en el bit del
registro del punto anterior). Prototipo: 

void Apagar_AD(void);

Escribir una función que me permita encender el A/D (forzar un uno en el bit del
registro del punto anterior). Prototipo: 

void Encender_AD(void);

Escribir una función que devuelva un entero entre 0 y 7 segun el contenido de los
3 bits de START del registro AD0CR. Prototipo:

uint8_t Estado_Disparo_AD (void);

Escribir una función que permita setear el AD para que no inicie nunca la
conversión (START = 000).

Escribir una función que permita setear el AD para que inicie la conversión ahora
(START = 001).

## Ejercicio 8:

Crear una variable de 32 bits no signada y asignarle el valor 0x12345678; Luego escriba
las siguientes funciones para desarrollar la variable anterior en bytes. Compruebe el orden de los
bytes mostrados y determine si se utiliza big endianess o little endianness:

Primero cree una función que muestre el contenido de la variable de 32 bits que recibe
como parámetro. Luego cree un puntero a una variable de 8 bits e inicialícelo apuntando
a la variable de 32 (con el correspondiente casteo). Mostrar lo apuntado por el puntero,
luego incrementar y volver a mostrar. Repetir el proceso hasta cubrir todo el espacio de
memoria de la variable. El prototipo es el siguiente:

int ImprimirBytesVar32Punteros (int32_t var32);

Crear una función que multiplique la variable de 32 bits por una máscara que solo tenga
en alto el byte más bajo (0x000000FF), y haga la función AND entre la variable de 32
bits desplazada y la máscara para obtener cada uno de los bytes. Utilice el operador “>>”
para realizar el desplazamiento. El prototipo es el siguiente:

int ImprimirBytesVar32Mascara (int32_t var32);

Genere una unión entre una variable de 32 bits y un array de 4 variables de 8 bits. Guarde
el valor de la variable de 32 bits recibida como parámetro en el campo de 32 bits y
muestre el contenido de los 4 elementos del array de 8 bits. El prototipo de la función es
el siguiente:

int ImprimirBytesVar32Union (int32_t var32);

Si recibiera 4 bytes por puerto serie correspondientes a una variable de 32 bits, ¿como
haría para volver a conformar dicha variable?

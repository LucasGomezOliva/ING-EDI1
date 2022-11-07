#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define NUMERO 6;

/*

Las directivas del preprocesador comienzan con “#”

1 - #include

Se reemplazan los #include <...> por el contenido del archivo
mencionado

2 - #define

Se reemplazan los #define … por su valor en todas las
coincidencias en el código.

3 -  #if, #ifdef, #ifndef

#ifndef FUNCION_H
#define FUNCION_H

<..code..>

#endif // !FUNCION_H

Esto sirve para compilar el código por porciones: útil para
generalizar librerías a varias versiones de microcontroladores.

*/

/// @brief Suma 2 variables int32_t
/// @param a Variable a
/// @param b Variable b
/// @return Suma de a con b
inline int32_t Suma(int32_t a, int32_t b)
{
    return a + b;
}

/*

inline:

Se definen y se utilizan como funciones normales, pero en la etapa de
compilación se reemplazan por el código de implementación de la misma.
Se utiliza una cantidad mayor de memoria de código a expensas de
velocidad de ejecución

*/

volatile int32_t var_volatile_int32_t;

/*

volatile:

Indica que la variable puede cambiar por eventos del
hardware independientemente del flujo del programa, por
ejemplo, por la escritura de un periférico.

*/

int main(int argc, char const* argv[])
{
    int32_t var_int32_t_a = 10;
    int32_t var_int32_t_b = 20;
    int32_t var_int32_t_resultado = 0;
    var_int32_t_resultado = Suma(var_int32_t_a, var_int32_t_b);
    return 0;
}
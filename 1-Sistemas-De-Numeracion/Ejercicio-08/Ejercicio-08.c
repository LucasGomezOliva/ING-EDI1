// Ejercicio 8 :  Extensión de signo
//

//a) Definir una variable sin signo de 16 bits llamada uvar16 y asignarle el valor 0x80FF;
//Imprimir este valor en hexadecimal, como entero sin signo y como entero con signo.Crear una
//variable sin signo de 32 bits llamada uvar32 y asignarle el valor de uvar16 realizando el casteo a
//uint32_t.Imprimir el contenido de uvar32 en hexadecimal, entero con signo y sin signo.(Tener
//en cuenta que no se muestran los ceros a la izquierda en el hexadecimal).
//
//b) Repetir el punto anterior pero utilizando variables con signo.¿Qué diferencias se ve al
//representar el hexadecimal de las dos variables de 32 bits ? ¿Para qué es esto necesario ? ¿La
//extensión de signo se hace teniendo en cuenta el tipo de dato de la variable de origen o el tipo de
//dato de la variable de destino ? ¿Interesa si el casteo de 16 a 32 bits es con o sin signo ?


#include <stdio.h>
#include<stdint.h>

int main()
{
    uint16_t unvar16 = 0x80FF;

    printf("\n Num = 0x%x", unvar16);

    uint32_t uvar32 = (uint32_t)unvar16;

    printf("\n Num = 0x%x", uvar32);

    return 0;
}

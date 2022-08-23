// Ejercicio 10 :  Codigo ASCII
//

//Utilizar la tabla ASCII como referencia.Crear una variable char y asignarle el valor 65
//en decimal.Imprimir el contenido de la variable utilizando printf con los caracteres de
//escape “ % c” y “ % d”.¿Este valor se corresponde con la tabla ASCII ?
//
//Asignarle ahora a la variable el caracter ‘a’, e imprimir el contenido de la variable de la
//misma manera que en el inciso anterior.¿Qué valor numérico se guarda en la variable
//char al asignarle un caracter ?
//
//Sumarle uno a la variable con el valor anterior y repetir la muestra del contenido de la
//variable
//
//¿Se puede realizar cualquier operación matemática o lógica sobre la variable char ?

#include <stdio.h>

int main()
{

    char var_char = "65";

    printf("\n %c", var_char);
    printf("\n %d", var_char);

    var_char = "a";

    printf("\n %c", var_char);
    printf("\n %d", var_char);

    var_char = var_char + 1;

    printf("\n %c", var_char);
    printf("\n %d", var_char);

    return 0;
}
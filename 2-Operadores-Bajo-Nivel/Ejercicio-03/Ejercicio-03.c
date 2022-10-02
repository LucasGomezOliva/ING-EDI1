// Ejercicio-03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Ejercicio 3: hacer una función ImprimirCamposFloat que permita imprimir los campos signo,
//exponente y mantisa de una variable float.Además debe devolverlos en una estructura que
//tenga estos tres campos.El prototipo debe ser el siguiente :
// 
//camposFloat_t ImprimirCamposFloat(float num);
// 
//Realizar asimismo una función que reciba los campos de un float en la estructura camposFloat_t
//y devuelva la variable float y la imprima en pantalla.El prototipo debe ser el siguiente :
// 
//float ArmarImprimirFloat(camposFloat_t camposFloat);

#include <stdio.h>
#include<math.h>
#include<stdint.h>

struct camposFloat_t {
    uint8_t signo;
    uint8_t exponente;
    uint32_t matisa;
};

typedef struct camposFloat_t camposFloat_t;

camposFloat_t ImprimirCamposFloat(float num);

float ArmarImprimirFloat(camposFloat_t camposFloat);

int main()
{
    camposFloat_t var_camposFloat_t;

    float var_float = -35.97;

    var_camposFloat_t = ImprimirCamposFloat(var_float);

    return 0;
}

camposFloat_t ImprimirCamposFloat(float num) {

    camposFloat_t var_camposFloat_t;

    var_camposFloat_t.signo = 0;
    var_camposFloat_t.exponente = 0;
    var_camposFloat_t.matisa = 0;

    uint32_t mask_sig = 0x80000000;
    uint32_t mask_exp = 0x7F800000;
    uint32_t mask_man = 0x007FFFFF;

    var_camposFloat_t.signo = (*(unsigned int*)&num) >> 31;
    var_camposFloat_t.exponente = (*(unsigned int*)&num) >> 23;
    var_camposFloat_t.matisa = (*(unsigned int*)&num);

    printf("\n Numero: 0x%x", (*(unsigned int*)&num));
    printf("\n 0x%x", var_camposFloat_t.signo);
    printf("\n 0x%x", var_camposFloat_t.exponente);
    printf("\n 0x%x", var_camposFloat_t.matisa);

    return var_camposFloat_t;
}

float ArmarImprimirFloat(camposFloat_t camposFloat) {

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

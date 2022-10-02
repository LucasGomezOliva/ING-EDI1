// Ejercicio 3 : Bases num�ricas
//

//La funci�n printf permite imprimir caracteres con cierto formato.Dentro de los
//caracteres de escape que permiten hacerlo, existe por ejemplo �% i�, �% x� y �% o� que permiten
//representar un n�mero en forma entera, hexadecimal y octal respectivamente.Realizar un
//programa que genere una tabla donde se permitan ingresar dos n�meros enteros A y B, y se
//represente en forma de tabla todos los n�meros entre A y B inclusive, mostrando su
//representaci�n decimal, hexadecimal y octal(se pueden encolumnar los valores con el car�cter
//de escape de printf �\t�).


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int NumeroA = 0;
    int NumeroB = 0;

    (void)scanf("%d", &NumeroA);

    (void)scanf("%d", &NumeroB);

    for (unsigned int Numero = NumeroA; Numero <= NumeroB; Numero++) {
        printf("\n Numero Entero: %i", Numero);
        printf("\n Numero Hexaecimal: %x", Numero);
        printf("\n Numero Octal: %o", Numero);
        printf("\n ============================================");
    }

    return 0;
}
// Ejercicio 6 :  Variables signadas y no signadas
//

//La funci�n printf cuenta con un sub - especificador que permite fijar el largo de la
//variable a imprimir(ver referencia).Se puede utilizar el sub - especificador �h�, colocando este
//car�cter entre el signo �% � y el especificador de tipo para fijar el largo de la variable a mostrar a
//16 bits.Por ejemplo, para fijar un entero signado de 16 bits quedar�a � % hd�.Cree una funci�n
//que reciba un entero de 16 bits con signo y que imprima el contenido de esta variable en
//hexadecimal, como entero no signado de 16 bits y como entero signado de 16 bits, con una
//leyenda que lo aclare para cada caso.El prototipo de la funci�n es el siguiente :
//
//void ImprimirContenidoEntero(int16_t numeroRepresentar);
//
//Luego cree un main donde se declare una variable con signo de 16 bits guardando el
//n�mero en hexadecimal �0x7FFF�.Utilizando la funci�n anterior, muestre el contenido de esta
//variable en los 3 formatos.�Hay alguna diferencia en la representaci�n ? Luego incremente el
//valor de esta variable en uno(utilizando ++ por ejemplo).Vuelva a llamar a la funci�n anterior
//para mostrar el contenido de la variable en los 3 formatos.�Por qu� se ven diferencias ?
//Vuelva a asignar el valor �0x0000� a la variable antes declarada, y muestre el contenido
//en los 3 formatos utilizando la funci�n anterior.Luego decremente el contenido de la variable
//(utilizando -- por ejemplo) y vuelva a mostrar el contenido utilizando la funci�n.�Qu�
//diferencias se observan ?


#include <stdio.h>
#include<stdint.h>

void ImprimirContenidoEntero(int16_t numeroRepresentar);

int main()
{
    return 0;
}

void ImprimirContenidoEntero(int16_t numeroRepresentar) {

}
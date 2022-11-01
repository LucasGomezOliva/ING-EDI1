;------------------------------------------------------------------------------

;Realizar un procedimiento en lenguaje asm que permita contar la cantidad de números
;mayores a 16 en un array. Escribir un programa con valores reales que muestre el
;funcionamiento.

;------------------------------------------------------------------------------

JMP START

ARRAY: 
        DB      1
        DB      1
        DB      2
        DB      4
        DB      20

START:
        MOV     C, 0            ;contador de numeros mayores
	MOV     A, ARRAY        ;array
        MOV     D, 0          	;contador de elementos reccorridos       
BUCLE:
	CMP     D, 5            ;comparo cuentos elementos ya recorri
        JE      FIN_BUCLE       ;si llego a 5 voy FIN_BUCLE
	MOV     B, [A]          ;guardo la direcc de a
	CMP     B,16            ;comparo con 16
        JA	CUENTO          ;JA Description:">" Condition:"Carry = FALSE && Zero = FALSE"
	INC     D               ;incremento la cantidad de elementos del array
	INC     A               ;avanzo a la siguiente posicion del array
	JMP     BUCLE
CUENTO:
        INC     C               ;increm el contador de numeros mayores
        INC     D               ;incremento la cantidad de elementos del array
        INC     A               ;avanzo a la siguiente posicion del array
        JMP     BUCLE

FIN_BUCLE:
        HLT                     ; stop
;------------------------------------------------------------------------------

;Ejercicio-01

;Realice una subrutina (BUSCAR_MAX) que permita hallar el valor máximo a partir de un array que contenga 10 números enteros.
;La definición de las variables será la siguiente:

;ARRAY DB -4, 3, 5, 12, -5, 8, 8, 6, 0, 1

;MAXIMO DB 0 2.

;------------------------------------------------------------------------------

JMP START
ARRAY:
        DB      15
        DB      110
        DB      54
        DB      52
        DB      45
        DB      89
        DB      32
        DB      68
        DB      35
START:
        MOV     C, 0            ; contador de elementos
        MOV     A, ARRAY        ; reg a recorre array
        MOV     D, [A]          ; maximo inicial
        
BUCLE:
	INC     A
        MOV     B, [A]          ; guardo la direcc de a
	CMP     B,D  
        JB      CUENTO
        MOV     D,B
CUENTO:
        INC     C               ; increm el contador
        CMP     C, 9
        JE      FIN_BUCLE
        JMP     BUCLE

FIN_BUCLE:
        HLT                     ; stop
;------------------------------------------------------------------------------

;Realizar una rutina en ASM que cuente la cantidad de números impares positivos que se les
;pase en un array. Debe contener este valor en el registro D y ser manejada como una
;subrutina (mediante un call)

;------------------------------------------------------------------------------

JMP START

ARRAY: 
        DB      1
        DB      1
        DB      2
        DB      4
        DB      20
START:
        MOV     C, 0            ;posiciones recorridas del array
        MOV     A, ARRAY        ;array
        MOV     D, 0          	;contador números impares positivos       
BUCLE:
        CMP     C, 5            ;comparo cuentos elementos ya recorri
        JE      FIN_BUCLE       ;si llego a 5 voy FIN_BUCLE
        MOV     B, [A]          ;guardo la direcc del ARRAY en B
        AND     B,0x01
        CMP     B,0x00          ;comparo si el numero es par o impare
        JE      NOCUENTO        ;si es par
        CALL    CUENTO          ;si es impar
        JMP     BUCLE
NOCUENTO:
        INC     C               ;incremento la cantidad de elementos del array reccorridos
        INC     A               ;avanzo a la siguiente posicion del array
        JMP     BUCLE
CUENTO:
        INC     D               ;incremento el contador números impares positivos
        INC     C               ;incremento la cantidad de elementos del array reccorridos
        INC     A               ;avanzo a la siguiente posicion del array
        RET
FIN_BUCLE:
        HLT                     ; stop
;------------------------------------------------------------------------------

;Realizar un procedimiento en lenguaje ASM que permita contar la cantidad de repeticiones
;en un vector del número 5 y su versión negativa (-5 en CA2) . Declare el vector de la siguiente
;manera:
;vector:: DB 1
;DB 5
;DB 7
;DB 5
;DB 0

;------------------------------------------------------------------------------

JMP START

vector: 
        DB      1
        DB      5
        DB      7
        DB      5
        DB      0xFB            ;0xFB --- 1111 1011 --- 0000 0101

START:
        MOV     C, 0            ;posiciones recorridas del vector
        MOV     A, vector       ;vector
        MOV     D, 0          	;contador de repeticiones del numero (5) y (-5)

BUCLE:
        CMP     C, 5            ;comparo cuentos elementos ya recorri
        JE      FIN_BUCLE       ;si llego a 5 voy FIN_BUCLE
        MOV     B, [A]          ;guardo la direcc del ARRAY en B
        CMP     B, 5            ;comparo si el numero es 5 
        JE      CUENTO          ;cuento si el numero es 5(positivo)
        JMP     ANALIZO         ;realizo CA2 para ver si es (-5)

ANALIZO:
        NOT     B               ;Complemento a 2
        ADD     B,1             ;Complemento a 2
        CMP     B, 5            ;comparo si el numero es 5 
        JE      CUENTO          ;cuento si el numero es 5 (negativo)
        INC     C               ;incremento la cantidad de elementos recorridos
        INC     A               ;avanzo a la siguiente posicion del vector
        JMP     BUCLE           ;vuelvo a ejecutar el BUCLE

CUENTO:
        INC     D               ;incremento el contador de repeticiones del numero (5) y (-5)
        INC     C               ;incremento la cantidad de elementos recorridos
        INC     A               ;avanzo a la siguiente posicion del vector
        JMP     BUCLE           ;vuelvo a ejecutar el BUCLE

FIN_BUCLE:
        HLT                     ; stop
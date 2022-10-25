;------------------------------------------------------------------------------

;Ejercicio-05

;Realice una subrutina (BUSCAR_ESPACIOS) que busque la cantidad de espacios en un array alfanumérico, 
;y los cargue en una variable llamada ESPACIOS. El array termina en $.

;ARRAY DB ‘Esto es un array de prueba’,’$’

;ESPACIOS DB 0

;------------------------------------------------------------------------------

JMP START

ARRAY: 
	    DB 	    "Esto es un array de prueba$"

START:
	    MOV 	A,ARRAY     
        MOV     B,0         ;cuento espacios
        MOV     C,255

LOOP:
        CMP     C,36
        JE      END
        MOV     C,[A]
        INC     A
        CMP     C,32        ;comparo con espacios
        JE      COUNT
	    JMP	    LOOP

COUNT:
        INC     B
        JMP     LOOP


END:
        HLT
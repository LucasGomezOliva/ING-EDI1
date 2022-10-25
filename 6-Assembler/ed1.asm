;------------------------------------------------------------------------------
STACKSG SEGMENT 
PILA    DW      100 DUP(0)
STACKSG ENDS
;------------------------------------------------------------------------------
DATASG SEGMENT
;variables
DATO8   DB     0
DATO16  DW     0
CAR     DB      'f'
CONT    DW      0
ARRAY   DB      5,-8,4,-5,6,0,2,4,-2,-1
TEXTO   DB      'marca' 
DATASG ENDS
;-----------------------------------------------------------------------
CODESG SEGMENT 
BEGIN   PROC 
	ASSUME 	SS:STACKSG,DS:DATASG,CS:CODESG
	MOV 	AX,DATASG	;Obtiene direcci�n de segmento de datos
	MOV	DS,AX		;Se lo carga en DS

INICIO:
        CALL    MAIN

;SALIR
	MOV 	AX,4C00H
	INT 	21H
BEGIN 	ENDP

MAIN PROC
;PROGRAMA PRINCIPAL

        MOV     CONT,0          ;CONT=CONTADOR DE NUMEROS NEGATIVOS
        MOV     SI,0            ;PONGO EN CERO EL REGISTRO INDICE
        LEA     BX,ARRAY        ;CARGA LA DIRECCION DE ARRAY EN BX
BUCLE1:
        MOV     AL,BX[SI]       ;LEO EL ARRAY[INDICE]                           
        INC     SI              ;INCREMENTO EL INDICE PARA LA PROX LECTURA
        CMP     SI,10           ;LLEGUE AL FINAL?
        JE      FINMAIN         ;SI! ME VOY, SINO CONTINUO

        CMP     AL,0            ;EL NRO LEIDO ES NEGATIVO?
        JG      BUCLE1          ;SI NO VUELVO ARRIBA BUSCO EL PR�XIMO
        INC     CONT            ;SI ERA NEGATIVO INCREMENTO EL CONTADOT
        JMP     BUCLE1          ;BUSCO EL PR�XIMO

FINMAIN:
        RET
MAIN ENDP

CODESG	ENDS

	END 	BEGIN


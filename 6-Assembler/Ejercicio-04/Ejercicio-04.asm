;------------------------------------------------------------------------------

;Ejercicio-04

;Implemente una rutina que cargue en un array los códigos de un contador anillo de módulo 8 utilizando las instrucciones de desplazamiento:

;00000001-00000010-000001000...hasta el 10000000

;------------------------------------------------------------------------------

JMP START

START:
		MOV 	B,0x01
LOOP:
		SHL 	B,1
		CMP 	B,0x80
		JE		START
		JMP 	LOOP
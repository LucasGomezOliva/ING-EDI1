JMP inicio

inicio:
	mov b,0x01
loop:
	shl b,1
	cmp b,0x80
	je inicio
	jmp loop
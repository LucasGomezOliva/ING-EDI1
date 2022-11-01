;------------------------------------------------------------------------------

;Ejercicio-08

;Contar la cantidad de números negativos (rutina CUENTA_NEG) en un array recibido
;por el registro BX y su largo en CL. Devolver el valor del contador en CH.

;------------------------------------------------------------------------------

	jmp start	

array:
	    db      0x81
	    db      0x92
	    db      0xa5
	    db      0xd2
start:
	    mov     b,array
	    mov     c,4
	    mov     d,0
cuenta_negativos:
	    mov     a,[b]
	    and     a,0x80
	    cmp     a,0x80
	    je      cuento:
	    jmp     no_cuento
cuento:
	    inc     d
no_cuento:
	    dec     c
	    cmp     c,0
	    je      fin
	    inc     b
	    jmp     cuenta_negativos
fin:
	mov         c,d	
	hlt
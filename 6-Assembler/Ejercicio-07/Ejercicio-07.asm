;------------------------------------------------------------------------------

;Ejercicio-07

;Realizar una subrutina (CUENTA_PARES) que cuente cuántos números pares hay en
;un array que se recibe por el registro BX y su largo en CL. Utilice las funciones de
;rotación o desplazamiento. Devolver el valor del contador en CH.

;------------------------------------------------------------------------------

	jmp start	

array:
	db      0x01
	db      0x22
	db      0x25
	db      0x62
start:
	mov     b,array
	mov     c,4
	mov     d,0
cuenta_pares:
	mov     a,[b]
	and     a,0x01
	cmp     a,0x00
	je      cuento:
	jmp     no_cuento
cuento:
	inc     d
no_cuento:
	dec     c
	cmp     c,0
	je      fin
	inc     b
	jmp     cuenta_pares
fin:
	mov     c,d	
	hlt
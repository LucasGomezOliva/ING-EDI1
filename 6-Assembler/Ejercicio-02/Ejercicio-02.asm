;------------------------------------------------------------------------------

;Ejercicio-02

;Realice una subrutina (CANTUNOS) que cuente la cantidad de bits en uno en el AL y devuelva esa cantidad en el CL.

;------------------------------------------------------------------------------

	jmp     start
start:
	    mov     a,0x81
	    call    cantunos
	    hlt

cantunos:
	    push    a
	    push    b
	    push    d
	    mov     c,0
	    mov     d,0
loop:
	    mov     b,a
	    and     b,0x01
	    cmp     b,0x01
	    jne     continuo
	    inc     c
continuo:
	    shr     a,1
	    inc     d
	    cmp     d,8
 	    je      fin
	    jmp     loop
fin: 
	    pop     d
	    pop     b
	    pop     a
	    ret
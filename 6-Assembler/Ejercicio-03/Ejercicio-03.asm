;------------------------------------------------------------------------------

;Ejercicio-03

;Utilice la subrutina anterior para calcular la cantidad de bits en uno en un array de 4 elementos como el siguiente:

;ARRAY DB 00001111b, 00000000b, 11111111b, 01010101b

;------------------------------------------------------------------------------


	jmp start

array:  db   00001111b 
        db   00000000b
        db   11111111b
        db   01010101b
       
start:
        mov     b,4
	    mov     d,array
mainloop:
	    mov     a,[d]
	    call    cantunos
	    call    myPrintf
	    dec     b
	    inc     d
	    cmp     b,0
	    je      fin_ejercicio
	    jmp     mainloop
fin_ejercicio:
	    hlt


myPointerToOut:
	    db      232
myPrintf:
	    push    a
	    push    b
	    push    d
	    mov     a,[myPointerToOut]
	    add     c,48
	    mov     [a],c
	    mov     b,[myPointerToOut]
	    add     b,1
	    mov     [myPointerToOut],b
	    pop     d
	    pop     b
	    pop     a	
	    ret

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
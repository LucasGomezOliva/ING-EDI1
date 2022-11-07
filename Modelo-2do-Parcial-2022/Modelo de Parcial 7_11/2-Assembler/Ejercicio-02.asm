;------------------------------------------------------------------------------

;Dado el siguiente código que función cumple el registro B?

;------------------------------------------------------------------------------

jmp start

array:
    db      0x34
    db      0x25
    db      0x46
    db      0x67
start:
    mov     c,4
    mov     b,array
loop:
    mov     a,[b]
    inc     b
    dec     c
    cmp     c,0
    jne     loop
hlt
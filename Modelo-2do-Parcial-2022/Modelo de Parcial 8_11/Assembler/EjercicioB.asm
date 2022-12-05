;------------------------------------------------------------------------------

;Dado el siguiente código, ¿Que función cumple el registro C? Y el registro B? ¿Qué función
;cumple la etiqueta/label array?

; el registro B cuenta las posiciones recorridas del array para de esta forma
; al llegar al numero 5 se ejecuta el hlt del programa

; el registro C guarda la direccion del array

; la etiqueta array indica que la variable en ese caso es una array

;------------------------------------------------------------------------------

JMP start
array:
    DB      4
    DB      2
    DB      6
    DB      1
    DB      7
start:
    mov     c, array
    mov     b, 0
loop:
    mov     d,[c]
    inc     c
    inc     b
    cmp     b,5
    jne loop:
    hlt
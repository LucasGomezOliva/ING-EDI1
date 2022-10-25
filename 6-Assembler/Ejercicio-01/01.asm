;------------------------------------------------------------------------------

;Ejercicio-01

;Realice una subrutina (BUSCAR_MAX) que permita hallar el valor máximo a partir de un array que contenga 10 números enteros.
;La definición de las variables será la siguiente:

;ARRAY DB -4, 3, 5, 12, -5, 8, 8, 6, 0, 1

;MAXIMO DB 0 2.

;------------------------------------------------------------------------------

jmp start
array:
db 15
db 110
db 54
db 52
db 45
db 89
db 32
db 68
db 35
start:
mov c, 0 ; contador de elementos
mov a, array ; reg a recorre array
mov d, [a] ; maximo inicial
        
bucle:
	inc a
        mov b, [a] ; guardo la direcc de a
	cmp b,d  
        jb cuento
        mov d,b
cuento:
inc c; increm el contador
cmp c, 9
je fin_bucle
jmp bucle

fin_bucle:
hlt ; stop
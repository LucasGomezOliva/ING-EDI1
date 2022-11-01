;------------------------------------------------------------------------------

;Ejercicio-06

;Realice una subrutina que convierta un número positivo de 8 bits en negativo (o viceversa).
;Complemente a uno utilizando la instrucción NOT y luego sume uno con la instrucción INC. 
;Verifique el resultado con la instrucción NEG.

;------------------------------------------------------------------------------

       jmp start
       ;https://es.planetcalc.com/747/
start:
        mov  a,12
        not  a
        add  a,1
        hlt
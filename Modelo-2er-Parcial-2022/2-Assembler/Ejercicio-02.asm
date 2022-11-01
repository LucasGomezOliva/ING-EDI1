;------------------------------------------------------------------------------

;Dado el siguiente código que función cumple el registro C

;------------------------------------------------------------------------------

JMP     START

ARRAY:
        DB      0x34
        DB      0X25
        DB      0X46
        DB      0X67
START:
        MOV     C,4
        MOV     B,ARRAY
LOOP:
        MOV     A,[B]
        INC     B
        DEC     C
        CMP     C,0
        jne     LOOP
        HLT
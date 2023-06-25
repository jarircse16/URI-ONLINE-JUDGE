#include<stdio.h>
int main()
{
    asm
    {
    .MODEL SMALL
.STACK 100H
.DATA

MSG DB '$'
MSG2 DB '$'

.CODE


MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    MOV AX,@DATA
    MOV ES,AX

    MAIN_:

    XOR CX,CX
    LEA DI,MSG
    FOR:

    MOV AH,1
    INT 21H
    CMP AL,0DH
    JE END_FOR
    CLD
    STOSB
    INC CX


    JMP FOR


    END_FOR:



    MOV AH,2
    MOV DL,0AH
    INT 21H
    MOV DL,0DH
    INT 21H




    LEA SI,MSG
    XOR BX,BX
    OUTPUT_FOR:
    XOR AX,AX
    CLD
    LODSB
    PUSH AX
    INC BX
    LOOP OUTPUT_FOR



    MOV CX,BX
    XOR BX,BX
    LEA DI,MSG
    REVERSE:
    XOR AX,AX
    POP AX
    CLD
    STOSB
    INC BX
    LOOP REVERSE



    MOV CX,BX
    LEA SI,MSG
    OUTPUT:
    CLD
    LODSB
    MOV AH,2
    MOV DL,AL
    INT 21H
    LOOP OUTPUT







    EXIT_:




    MOV AH,4CH
    INT 21h
    MAIN ENDP
END MAIN
    };
}

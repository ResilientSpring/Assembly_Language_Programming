.686
.model flat, c
.stack 100h

.data

i    byte 1
x    byte y
c    byte 2
a    byte ?
b    byte ?

     .code

main proc
     mov al, c
     mov b, al
     mov a, b
main endp

.end


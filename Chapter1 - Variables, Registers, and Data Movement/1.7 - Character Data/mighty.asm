.686
.model flat, c
.stack 100h
.data

letter1 byte 'A'  ; first number
letter2 byte ?  ; second number
     .code
main proc
     mov eax, letter1  ; load eax with contents of num1
     mov letter2, eax  ; store eax in num2
     ret
main endp
     end
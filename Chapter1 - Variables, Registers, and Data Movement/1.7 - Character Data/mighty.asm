.686
.model flat, c
.stack 100h
.data

; letter1 = 'A';
letter1 byte 'A'  
letter2 byte ? 

     .code
main proc
     ; letter2 = letter1;
     mov al, letter1  ; load eax with contents of num1
     mov letter2, al  ; store eax in num2
     ret
main endp
     end
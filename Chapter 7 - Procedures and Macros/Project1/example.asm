data segment
    num db 0
    newline db 13,10,'$'
    space db ' ','$'
data ends

code segment
     assume cs:code, ds:data
start:
    mov ax, data     
    mov ds, ax       
    mov bl, num
    inc bl
    call print_8bit_num_h ;b
    call print_spabe ;e
    call print_newline ;11
    mov cx, 0ffffffffh ;14
    mov ax, 4c00h    ;17
    int 21h          


print_8bit_num_h:
    push ax
    mov al, bl
    and al,0F0h
    shr al,4
    call print_num
    ;--------------------------------------
    mov al, bl
    and al,00Fh
    call print_num
    pop ax
    ret
print_num:
    cmp al,9
    jg print_two_digits
    add al, '0'  
    mov dl, al
    mov ah, 02H
    int 21h
    ret

print_two_digits:
    sub al, 10
    add al, 'A'  
    mov dl, al
    mov ah, 02H
    int 21h
    ret
print_spabe:
    lea dx, space   
    mov ah, 09h      
    int 21h 
    ret
print_newline:
    lea dx, newline  
    mov ah, 09h      
    int 21h 
    ret
code ends

end start 
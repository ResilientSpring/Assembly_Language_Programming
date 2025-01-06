.model small
.stack 100h

.data
    msg db "Hello World!", 0

.code

assume cs:code, ds:data;

main proc

    ; Initialize data segment
    mov ax, @data
    mov ds, ax

    ; Print the message
    mov ah, 09h          ; DOS function 09h (Print string)
    lea dx, msg          ; Load the address of the message into DX
    int 21h              ; Call DOS interrupt

    ; Exit the program
    mov ah, 4Ch          ; DOS function 4Ch (Terminate program)
    int 21h              ; Call DOS interrupt

main endp

end 

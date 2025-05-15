.model small
.stack 100h

.data

    msg db "Hello, World!", 13, 10, "$"  ; Message to display (terminated with '$')

.code

main proc

    ; Initialize data segment
    mov ax, @data        ; Load the address of the data segment.
    mov ds, ax           ; Move it to DS register.

    ; Print the message
    lea dx, msg          ; Load the address of the message into DX
    mov ah, 09h          ; DOS function 09h (Print string)
    int 21h              ; Call DOS interrupt

    ; Exit the program
    mov ah, 4Ch          ; DOS function 4Ch (Terminate program)
    int 21h              ; Call DOS interrupt

main endp

end main  ; Mark the end of the program.[Notes1]

; Notes:
; 1. warning L4038: program has no starting address.   
; 
; An *.EXE needs an entry point specified in the END statement
; to tell the linker where to start your program.[1]

;References:
;1. https://masmforum.com/board/index.php?topic=11504.0

.model small
.stack 100h

.data

    msg db "Bus Device Function VendorID Sub-SystemID", 13, 10, "$"  ;

    max_bus_num       dword  256;
    max_device_num    dword 32;
    max_function_num  dword  8;

    bus_num           dword  0;
    device_num        dword  0;
    function_num      dword  0;

.code

main proc

    ; Initialize data segment
    mov ax, @data        ; Load the address of the data segment.
    mov ds, ax           ; Move it to DS register.

    ; Print the message
    lea dx, msg          ; Load the address of the message into DX
    mov ah, 09h          ; DOS function 09h (Print string)
    int 21h              ; Call DOS interrupt


	mov eax, 80000000h;  Put the address of PCI register to be accessed in eax.

	mov dx, 0CF8h; Put the address port in dx.Since this is PCI, use 0xCF8 as the port to open access to the device.

	out dx, eax;  Send the PCI address port to the I / O space of the processor.

	mov dx, 0CFCh; Put the data port in dx.Since this is PCI, use 0xCFC as the data port to communicate with the device.

	in eax, dx;  Put into eax the data that was read from the PCI device.

   ; Print the content of ax.
    mov     bx,ax          ;CONST
    xor     cx,cx          ;Reset counter
a: xor     dx,dx          ;Setup for division DX:AX / BX
    div     bx             ; -> AX is Quotient, Remainder DX=[0,9]
    push    dx             ;(1) Save remainder for now
    inc     cx             ;One more digit
    test    ax,ax          ;Is quotient zero?
    jnz     a             ;No, use as next dividend
b: pop     dx             ;(1)
    add     dl,"0"         ;Turn into character [0,9] -> ["0","9"]
    mov     ah,02h         ;DOS.DisplayCharacter
    int     21h            ; -> AL
    loop    b
                    
    
endOfProgram:

    ; Exit the program
    mov ah, 4Ch          ; DOS function 4Ch (Terminate program)
    int 21h              ; Call DOS interrupt

main endp

end main  ; Mark the end of the program.

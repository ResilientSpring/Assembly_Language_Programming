#include <stdio.h>

int main() {

    int a, b;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 8; k++) {
                a = i + j + k;
            }
        }
    }

    printf("a is now %d.\n", a);

    int i, j, k;

    __asm {


        ; Outer loop(i)
        mov ecx, 10; Initialize outer loop counter(i) to 10
        outer_loop:

        push ecx; Save outer loop counter
            mov ebx, 0; Initialize i to 0. BX will represent i.

            ; Middle loop(j)
            mov ecx, 9; Initialize middle loop counter(j) to 9
            middle_loop:
        push ecx; Save middle loop counter
            mov esi, 0; Initialize j to 0. SI will represent j.

            ; Inner loop(k)
            mov ecx, 8; Initialize inner loop counter(k) to 8
            inner_loop:
        push ecx; Save inner loop counter
            mov edi, 0; Initialize k to 0. DI will represent k.

            ; Calculate a = i + j + k
            mov eax, ebx; Move i(BX) to AX
            add eax, esi; Add j(SI) to AX
            add eax, edi; Add k(DI) to AX
            mov b, eax; Store the result in 'b'

            inc edi; Increment k
            pop ecx; Restore inner loop counter
            loop inner_loop; Decrement CX and jump to inner_loop if CX != 0

            inc esi; Increment j
            pop ecx; Restore middle loop counter
            loop middle_loop; Decrement CX and jump to middle_loop if CX != 0

            inc ebx; Increment i
            pop ecx; Restore outer loop counter
            loop outer_loop; Decrement CX and jump to outer_loop if CX != 0
    }

    printf("b is now %d.\n", b);

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language
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
        mov cx, 10; Initialize outer loop counter(i) to 10
        outer_loop:

        push cx; Save outer loop counter
            mov bx, 0; Initialize i to 0. BX will represent i.

            ; Middle loop(j)
            mov cx, 9; Initialize middle loop counter(j) to 9
            middle_loop:
        push cx; Save middle loop counter
            mov si, 0; Initialize j to 0. SI will represent j.

            ; Inner loop(k)
            mov cx, 8; Initialize inner loop counter(k) to 8
            inner_loop:
        push cx; Save inner loop counter
            mov di, 0; Initialize k to 0. DI will represent k.

            ; Calculate a = i + j + k
            mov ax, bx; Move i(BX) to AX
            add ax, si; Add j(SI) to AX
            add ax, di; Add k(DI) to AX
            movzx b, ax; Store the result in 'b'

            inc di; Increment k
            pop cx; Restore inner loop counter
            loop inner_loop; Decrement CX and jump to inner_loop if CX != 0

            inc si; Increment j
            pop cx; Restore middle loop counter
            loop middle_loop; Decrement CX and jump to middle_loop if CX != 0

            inc bx; Increment i
            pop cx; Restore outer loop counter
            loop outer_loop; Decrement CX and jump to outer_loop if CX != 0
    }

    printf("b is now %d.\n", b);

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language
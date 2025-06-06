#include <stdio.h>

int main() {

    int a;
    int b;
    int i;
    int j;
    int k;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            for (k = 0; k < 8; k++) {
                a = i + j + k;
            }
        }
    }

    printf("a is now %d.\n", a);

    __asm {

        mov b, 0;

        mov i, 0;     i = 0
            mov ecx, 10;  i < 10; Set the loop count of for01.

            for01:


        push ecx;             Save the loop count of for01.

            mov j, 0;     j = 0
            mov ecx, 9;   j < 9;  Set the loop count of for02.

            for02:


        push ecx;             Save the loop count of for02.

            mov k, 0;     k = 0
            mov ecx, 8;   k < 8;  Set the loop count of for03.

            for03:


        push ecx;     Even for03 is the innermost loop, push is still required.

            mov eax, i;   Because eax contains arbitrary value as it has not been initialized, mov should be used.
            add eax, j;
        add eax, k;

        mov b, eax;

        inc k;      k++;

        pop ecx;    Restore inner loop counter;
        loop for03;

        inc j;      j++;

        pop ecx;    Restore middle loop counter.
            loop for02;

        inc i;      i++;

        pop ecx;    Restore outer loop counter.
            loop for01;
    }

    printf("b is now %d.\n", b);

}
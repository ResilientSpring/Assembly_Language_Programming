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

        mov b, 0;

        mov ecx, 10;  i < 10; Set the loop count of for01.

    for01:

        mov i, 0;  i = 0
        
        push ecx;

        mov ecx, 10;

    for02:

        mov j, 0;  j = 0
            push ecx;

        mov ecx, 10;

    for03:

        mov k, 0;  k = 0

            add eax, i;
        add eax, j;
        add eax, k;

        loop for03;

        pop ecx;

        loop for02;

        pop ecx;

        loop for01;


    }

    printf("b is now %d.\n", b);

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language
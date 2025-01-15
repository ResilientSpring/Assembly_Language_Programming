#include <stdio.h>

int main() {

    int a;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                a = i + j + k;
            }
        }
    }

    printf("eax is now %d.\n", a);

    int i, j, k;

    __asm {

        mov a, 0;

        mov ecx, 10;

    for01:

        push ecx;

        mov ecx, 10;

    for02:

        push ecx;

        mov ecx, 10;

    for03:

        mov eax, a;
        add eax, i;
        add eax, j;
        add eax, k;
        mov a, eax;

        loop for03;

        pop ecx;

        loop for02;

        pop ecx;

        loop for01;

    }

    printf("a is now %d.\n", a);

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language
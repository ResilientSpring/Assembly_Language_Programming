#include <stdio.h>

int main() {

    int eax;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                eax = i + j + k;
            }
        }
    }

    printf("eax is now %d.\n", eax);

    int i, j, k;

    __asm {

        mov eax, 0;

        mov ecx, 10;

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

    printf("eax is now %d.\n", eax);

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language
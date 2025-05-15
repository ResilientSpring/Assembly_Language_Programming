#include <stdio.h>

int main() {
    int a, b;

    // C code (same as before)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 8; k++) {
                a = i + j + k;
            }
        }
    }

    printf("a is now %d.\n", a);
    __asm {
        mov b, 0;

        mov ecx, 10;  // Outer loop (i)
    outer_loop:
        push ecx;
        mov ebx, 0;    // i (in ebx)

        mov ecx, 9;   // Middle loop (j)
    middle_loop:
        push ecx;
        mov esi, 0;    // j (in esi)

        mov ecx, 8;   // Inner loop (k)
    inner_loop:
        push ecx;
        mov edi, 0;    // k (in edi)

        mov eax, ebx;  // i
        add eax, esi;  // + j
        add eax, edi;  // + k
        mov b, eax;

        inc edi;
        pop ecx;
        loop inner_loop;

        inc esi;
        pop ecx;
        loop middle_loop;

        inc ebx;
        pop ecx;
        loop outer_loop;
    }

    printf("b is now %d.\n", b);
    return 0;
}
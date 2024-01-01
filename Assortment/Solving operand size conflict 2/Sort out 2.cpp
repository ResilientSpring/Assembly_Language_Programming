#include <iostream>
using namespace std;

int main() {

    int a = 3, b = 3, c;

    __asm {
        mov eax, a;
        mov ebx, b;
        add eax, ebx;
        mov c, eax;
    }

    printf("%d", c);


}

// Source: https://stackoverflow.com/questions/60651672/inline-assembly-error-operand-size-conflict

/*

MSVC compiler is smart enough to realize that you defined a, b, c as integers which are 32-bits on 
that platform. So it thinks moving a 32-bit value into a 16-bit register is a conflict. 
You can define a,b,c as a short int (which is 16-bits) instead of int; Use 32-bit registers EAX, EBX 
instead of AX, BX; Or override the size with word ptr like mov ax, word ptr a ¡VMichael Petch

*/
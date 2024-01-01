#include <iostream>
using namespace std;

int main() {

    int a = 3, b = 3, c;

    __asm {
        mov ax, a;
        mov bx, b;
        add ax, bx;
        mov c, ax;
    }

    printf("%d", c);


}

// Source: https://stackoverflow.com/questions/60651672/inline-assembly-error-operand-size-conflict
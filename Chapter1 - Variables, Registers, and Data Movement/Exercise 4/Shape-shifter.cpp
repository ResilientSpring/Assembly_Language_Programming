#include <iostream>
using namespace std;

int main() {

	int i = 1;
	int x, y;
	int a, b;
	int c = 2;

	__asm {

	    ;  mov b, c
		mov al, c
		mov b, al

	    ;  mov a, b
		mov al, b
		mov a, al

		mov y, 1
		
	    ; mov x, y
		mov al, y
		mov x, al

	}

	cout << "a = " << a << "\nb = " << b << "c = " << c << "\nx = " << x << "\ny = " << y << "\n";
}
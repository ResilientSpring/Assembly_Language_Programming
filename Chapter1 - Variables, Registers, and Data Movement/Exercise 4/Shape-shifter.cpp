#include <iostream>
using namespace std;

int main() {

	int i = 1;
	int x, y;
	int a, b;
	int c = 2;

	// int in C++ is 32-bit

	__asm {

	    ;  mov b, c
		mov eax, c
		mov b, eax

	    ;  mov a, b
		mov eax, b
		mov a, eax

		mov y, 1
		
	    ; mov x, y
		mov eax, y
		mov x, eax

	}

	cout << "a = " << a << "\nb = " << b << "c = " << c << "\nx = " << x << "\ny = " << y << "\n";
}
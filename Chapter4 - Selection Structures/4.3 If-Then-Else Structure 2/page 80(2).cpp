#include <iostream>
using namespace std;

int main() {

	int x = 22, y = 11;

	/*
		 if(x >= y)
			 x--;
		 else
			 y--;
	*/

	__asm {

		mov eax, x;
	if01:	cmp eax, y;
		jge then01;
		jnge then02;
	then01: dec eax;
		mov x, eax;
		jmp endif;
	then02: dec y;
	endif: nop;

	}

	printf("x is now %d, and y is now %d \n", x, y);
}
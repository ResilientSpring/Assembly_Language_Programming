#include <stdio.h>
using namespace std;

int main() {

	/*
	   if(x <= 100)
	     if(x < 50)
		   y++;
         else
	       y = 0;
       else
	     y--;
	
	*/

	int x = 22, y = 11;

	__asm {

		cmp x, 100;
		jle then01;
		jg then04;
	then01: cmp x, 50;
		jl then02;
		jge then03;
	then02: inc y;
		jmp endif02;
	then03: mov y, 0;
		jmp endif02;
	then04: dec y;
		jmp endif01;

	endif02: nop;
	endif01: nop;

	}

	printf("x is now %d, while y is now %d", x, y);

	x = 52, y = 11;

	__asm {

		cmp x, 100;
		jle then05;
		jg then04;
	then05: cmp x, 50;
		jl then02;
		jge then03;
	then02: inc y;
		jmp endif02;
	then03: mov y, 0;
		jmp endif02;
	then04: dec y;
		jmp endif01;

	endif02: nop;
	endif01: nop;

	}

	printf("x is now %d, while y is now %d", x, y);
}
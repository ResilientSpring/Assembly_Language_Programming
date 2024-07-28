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

	printf("x is now %d, while y is now %d. \n", x, y);

	x = 52, y = 11;

	__asm {

		cmp x, 100;
		jle then05;
		jg then08;
	then05: cmp x, 50;
		jl then06;
		jge then07;
	then06: inc y;
		jmp endif04;
	then07: mov y, 0;
		jmp endif04;
	then08: dec y;
		jmp endif03;

	endif04: nop;
	endif03: nop;

	}

	printf("x is now %d, while y is now %d. \n", x, y);

	x = 102, y = 11;

	__asm {

		cmp x, 100;
		jle then09;
		jg then12;
	then09: cmp x, 50;
		jl then10;
		jge then11;
	then010: inc y;
		jmp endif06;
	then11: mov y, 0;
		jmp endif06;
	then12: dec y;
		jmp endif05;

	endif06: nop;
	endif05: nop;

	}

	printf("x is now %d, while y is now %d. \n", x, y);
}
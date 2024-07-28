#include <stdio.h>
using namespace std;

int main() {

	/*
	  if(x < 50)
	    y = 0;
	  else
	    if(x <= 200)
	      y = 0;
	    else 
	      y--;
	
	*/

	int x = 22, y = 11;

	__asm {

		cmp x, 50;
		jl then01;
		jge then02;
	then01: mov y, 0;
		jmp endif01;
	then02: cmp x, 200;
		jle then03;
		jl then04;
	then03: mov y, 0;
		jmp endif01;
	then04: dec y;

	endif01: nop;
	}

	printf("x is now %d, y is now %d. \n", x, y);

	x = 52, y = 11;

	__asm {

		cmp x, 50;
		jl then05;
		jge then06;
	then05: mov y, 0;
		jmp endif02;
	then06: cmp x, 200;
		jle then07;
		jl then08;
	then07: mov y, 0;
		jmp endif02;
	then08: dec y;

	endif02: nop;
	}

	printf("x is now %d, y is now %d. \n", x, y);
}
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
	the01: mov y, 0;
		jmp endif01;
	then02: cmp x, 200;
		jle then03;
	then03: mov y, 0;

	endif01: nop;
	}

}
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
		jle then03;
	then02: inc y;
	then03: mov y, 0;

	}

}
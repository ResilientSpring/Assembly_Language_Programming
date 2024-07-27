#include <iostream>
using namespace std;

int main() {

	int x, y;

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
		then02: dec y;


	}

}
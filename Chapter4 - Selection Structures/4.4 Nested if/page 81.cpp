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

		cmp eax, 50;
		jl 

	}

}
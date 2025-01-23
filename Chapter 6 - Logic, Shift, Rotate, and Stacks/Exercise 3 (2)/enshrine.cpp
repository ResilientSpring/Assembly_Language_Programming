#include <stdio.h>

int main() {


	int a, b, c, d;

	__asm {

		mov eax, 1;
		push eax;
		mov eax, 2;
		push eax;
		mov eax, 3;
		push eax;
		mov eax, 4;
		push eax;

		

	}


}
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

		pop eax;

		mov a, eax;

		pop eax;

		mov b, eax;

		pop eax;

		mov c, eax;

		pop eax;

		mov d, eax;

	}


	printf("a now contains %d.\n", a);
	printf("b now contains %d.\n", b);
	printf("c now contains %d.\n", c);
	printf("d now contains %d.\n", d);

}
#include <stdio.h>

int main() {


	int a, b, c, d;

	__asm {

		mov eax, 1;
		mov ebx, 2;
		mov ecx, 3;
		mov edx, 4;

		push eax;
		push ebx;
		push ecx;
		push edx;

		pop a;
		pop b;
		pop c;
		pop d;

	}

	printf("a now contains %d.\n", a);
	printf("b now contains %d.\n", b);
	printf("c now contains %d.\n", c);
	printf("d now contains %d.\n", d);


}
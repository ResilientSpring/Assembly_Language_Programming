#include <stdio.h>

int main() {

	int count, a;

	__asm {

		mov eax, 99;

		push eax;

		mov count, 0;

		mov ecx, 8;

	for01:
		test al, 00000001b;
		jz ramification;
		inc count;

	ramification:
		shr al, 1;
		loop for01;

		pop eax;

		mov a, eax;
	}

	printf("eax is restored to %d.\n", a);
	printf("count is now %d.\n", count);
}
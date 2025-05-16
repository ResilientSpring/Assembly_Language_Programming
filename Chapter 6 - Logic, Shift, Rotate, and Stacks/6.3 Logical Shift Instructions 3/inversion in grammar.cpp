#include <stdio.h>

int main() {

	int count;
	unsigned char temp;

	__asm {

		mov count, 0;
		mov temp, al;

		mov ecx, 8;

	for01:

		test al, 00000001b;
		jz ramification;

		inc count;

	ramification:
		shr al, 1;
		loop for01;

		mov al, temp;

	}

	printf("count is %d.\n", count);

}
#include <stdio.h>

int main() {

	int count;
	unsigned char temp;

	__asm {

		mov count, 0;

		mov ecx, 8;
		mov temp, al;


	for01:

		mov ah, al;
		and ah, 00000001b;
		jz ramification;

		inc count;

	ramification:
		shr al, 1;
		loop for01;

		mov al, temp;

	}

	printf("count is %d.\n", count);

}
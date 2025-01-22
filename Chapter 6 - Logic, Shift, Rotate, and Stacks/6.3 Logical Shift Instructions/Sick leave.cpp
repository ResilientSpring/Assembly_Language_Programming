#include <stdio.h>

int main() {

	int count;
	unsigned int temp;

	__asm {
		
		move count, 0;
		move temp, al;

		mov ecx, 8;

	for01:

		mov ah, al;
		and, 00000001b;
		jz ramification;

		inc count;

	ramification:
		shr al, 1;
		loop for01;

		mov al, temp;

	}

	printf("count is %d.\n", count);

}
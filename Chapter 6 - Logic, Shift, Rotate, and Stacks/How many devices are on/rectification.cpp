#include <stdio.h>

int main() {

	int count;
	long long temp, config_address;

	__asm {

		mov config_address, 08002080Ch;

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
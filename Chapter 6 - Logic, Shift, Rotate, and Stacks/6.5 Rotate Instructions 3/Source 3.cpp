#include <stdio.h>

int main() {

	int count;

	__asm {

		mov eax, 08002000Ch;

		mov count, 0;

		mov ecx, 32;

	for01:
		test eax, 1b;
		jz ramification;

		inc count;

	ramification:
		ror eax, 1;
		loop for01;
	}

	printf("count is %d.\n", count);

}
#include <stdio.h>

int main() {

	int count;

	__asm {

		mov count, 0;

		mov ecx, 8;

	for01:
		test al, 00000001b;
		jz ramification;

		inc count;

	ramification:
		rol al, 1;
		loop for01;
	}


}
#include <stdio.h>

int main() {

	int counter = 0;
	int j = 1;

	while (j <= 0) {

		counter++;

		j++;
	}

	printf("counter is now %d.\n", counter);

	counter = 0;
	j = 1;

	for (; j <= 0; j++)
		counter++;

	printf("counter is now %d.\n", counter);

	__asm {

		mov ecx, 0;
		jecxz ending;

	for01:

		inc counter;

		inc j;

		loop for01;

	ending:
		nop;

	}

	printf("counter is now %d.\n", counter);

}
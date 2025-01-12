#include <stdio.h>

int main() {

	int counter = 0;
	int k = 0;

	while (k < 3) {

		counter++;

		k = k + 3;

	}

	printf("counter is now %d.\n", counter);

	counter = 0;
	k = 0;

	for (k = 0; k < 3; k += 3)
		counter++;

	printf("counter is now %d.\n", counter);

	__asm {

		mov k, 0;
		mov counter, 0;

		mov ecx, 1;

	for01:

		inc counter;

		loop for01;

	}

	printf("counter is now %d.\n", counter);
}
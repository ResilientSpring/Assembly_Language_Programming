#include <stdio.h>

int main() {

	int i;
	int sum = 0;
	int total = 0;

	for (i = 1; i <= 3; i++)
	{
		sum += 2;
	}

	i = 1;

	__asm {

		mov ecx, 3;

	for01:


	endfor01: nop;

	}

	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", sum);
}
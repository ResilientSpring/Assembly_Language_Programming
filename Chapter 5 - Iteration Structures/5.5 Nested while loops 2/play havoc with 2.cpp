#include <stdio.h>

int main() {

	int sum = 0;
	int total = 0;

	int i = 1;
	int j = 0;

	while (i <= 2) {

		j = 1;

		while (j <= 3) {

			sum++;

			j++;
		}

		i++;

	}


	__asm {

		mov i, 1;
		mov j, 0;

	while01:
		cmp i, 2;
		jle loopBody01_1;
		jg  ending;

	loopBody01_1:
		mov j, 1;

	while02:
		cmp j, 3;
		jle loopBody02;
		jg  loopBody01_2;

	loopBody02:
		inc total;
		inc j;
		jmp while02;

	loopBody01_2:

		inc i;
		jmp while01;

	ending:
		nop;
	}


	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);

}
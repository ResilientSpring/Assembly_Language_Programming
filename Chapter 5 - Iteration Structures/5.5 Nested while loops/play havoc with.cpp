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
		jle loopBody01;
		jg  endOf_while_loop01;

	loopBody01:
		mov j, 1;

	while02:
		cmp j, 3;
		jle loopBody02;
		jg  endOf_while_loop02;

	endOf_while_loop01: 
		nop;
		jmp ending;

	loopBody02:
		inc total;
		inc j;
		jmp while02;

	endOf_while_loop02: 

		inc i;
		jmp while01;

	ending:
		nop;
	}


	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);

}
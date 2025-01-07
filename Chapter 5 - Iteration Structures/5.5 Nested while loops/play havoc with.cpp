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
		jg  

			loopBody01:

	endOf_while_loop01: nop;

	}


	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);

}
#include <stdio.h>

int main() {

	int i = 1;
	int sum = 0;
	int total = 0;

	while (i <= 3) {

		sum += 2;

		i++;
	}

	i = 1;

	__asm {

	while01:	
		cmp i, 3;
		jle loopBody01;
		jg  ending;

	loopBody01:
		add total, 2;
		add     i, 1;
		jmp while01;

	ending: nop;

	}

	printf("sum is now %d.\n", sum);
	printf("total is now %d. \n", total);

}
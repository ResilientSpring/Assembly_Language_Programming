#include <stdio.h>

int main() {

	int i = 1;
	int sum = 0;
	int total = 0;

	while (i <= 3) {

		sum += 2;

		i++;
	}

	__asm {

		

	}

	printf("sum is now %d.\n", sum);
	printf("total is now %d. \n", total);

}
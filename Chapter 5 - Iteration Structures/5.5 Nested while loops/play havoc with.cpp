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

		

	}


	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);

}
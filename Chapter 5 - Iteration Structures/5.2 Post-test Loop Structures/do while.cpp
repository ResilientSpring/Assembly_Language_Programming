#include <stdio.h>

int main() {

	int i = 1;
	int sum = 0;
	int total = 0;

	do
	{

		sum += 2;

		i++;

	} while (i <= 3);


	i = 1;

	__asm {


	}

	printf("sum is now %d.\n", sum);
	printf("total is now %d. \n", total);

}
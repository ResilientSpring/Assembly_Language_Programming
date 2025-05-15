#include <stdio.h>

int main() {

	int i = 0;
	int sum = 0;
	int total = 0;

	for ( i = 0; i <= 3; i++)
	{
		sum += 2;
	}

	/////

	i = 0;

	while (i <= 3) {

		total += 2;

		i++;
	}

	/////
	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);

}
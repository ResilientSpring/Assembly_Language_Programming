#include <stdio.h>

int main() {


	int sum = 0;
	int total = 0;

	int i;
	int j;

	for ( i = 1; i <= 2; i++)
	{
		for (j = 1; j <= 3; j++) {

			sum++;

		}
	}

	__asm {

		mov ecx, 2;

	for01:

		mov i, 1;




	}

	printf("sum is now %d. \n", sum);
	printf("total is now %d. \n", total);
}
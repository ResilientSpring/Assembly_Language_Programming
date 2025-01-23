#include <stdio.h>

int main() {

	int product, num1;

	__asm {

		mov num1, 2;

		shl num1, 3;

		mov product, num1;
	}

	printf("product is %d.\n", product);
}
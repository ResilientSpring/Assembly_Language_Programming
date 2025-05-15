#include <stdio.h>

int main() {

	int product, num1;

	__asm {

		mov num1, 2;

		shl num1, 3;

		mov eax, num1;

		mov product, eax;
	}

	printf("product is %d.\n", product);
}
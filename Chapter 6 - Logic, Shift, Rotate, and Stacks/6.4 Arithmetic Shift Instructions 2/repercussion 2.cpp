#include <stdio.h>

int main() {

	int num1;

	__asm {

		mov num1, 2;

		shl num1, 3;

	}

	printf("product is %d.\n", num1);
}
#include <stdio.h>

int main() {

	int amount;

	__asm {

		mov amount, 36;

		sar amount, 2;

	}

	printf("answer is %d.\n", amount);
}
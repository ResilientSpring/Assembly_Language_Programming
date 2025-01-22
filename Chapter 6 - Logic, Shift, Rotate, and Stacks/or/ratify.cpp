#include <stdio.h>

int main() {

	char letter = 'A';

	__asm {

		or letter, 00100000b;

	}

	printf("letter is %c.\n", letter);
}
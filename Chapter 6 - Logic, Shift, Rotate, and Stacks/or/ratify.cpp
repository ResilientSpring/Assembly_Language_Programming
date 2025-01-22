#include <stdio.h>

int main() {

	char letter = 'A';

	__asm {

		or letter, 0010000b;

	}

	printf("letter is %c.\n", letter);
}
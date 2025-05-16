#include <stdio.h>

int main() {

	char letter = 's';

	__asm {

		and letter, 11011111b;

	}

	printf("letter is %c.\n", letter);
}
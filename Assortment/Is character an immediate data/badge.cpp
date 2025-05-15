#include <stdio.h>

int main() {

	int a;
	char b;

	__asm {

		mov a, 'A';

		mov b, 'B';
	}

	printf("a is %c.\n", a);

	printf("b is %c.\n", b);

}
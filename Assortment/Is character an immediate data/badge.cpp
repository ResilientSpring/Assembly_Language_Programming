#include <stdio.h>

int main() {

	int a;

	__asm {

		mov a, 'A';


	}

	printf("a is %c.\n", a);

}
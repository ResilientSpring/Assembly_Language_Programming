#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS

int main() {

	int count = 0;
	char initial;

	printf("Type a character: \n");
	scanf("%c", &initial);

	/*
	
	if(initial > 'e')
		count++;
	
	*/

	__asm {

		cmp initial, 'e';  Is character 'e' deemed an immediate value ?

		jae then01;   jae is an "unsigned" jump instruction.

		then01: inc count;
	}

}
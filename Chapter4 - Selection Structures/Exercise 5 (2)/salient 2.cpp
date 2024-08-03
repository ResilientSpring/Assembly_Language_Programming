#include <stdio.h>

int main() {

	/*

	switch (number){

		case 0:
		case 1: count = count + 2;
				break;
		case 2:
		case 3: count = count - 2;

	}

	*/

	int number = 4, count = 0;

	__asm {

		cmp number, 0;
		je case01;

		cmp number, 1;
		je case01;

		cmp number, 2;
		je case03;

		cmp number, 3;
		je case03;

		jmp end_switch;

	case01: add  count, 2;
		jmp end_switch;

	case03: sub count, 2;

	end_switch: nop;

	}

	printf("number is now %d, while count is now %d. \n", number, count);

}
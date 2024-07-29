#include <stdio.h>

int main() {

	int w = 4, x = 0, y = 1, z = 2;

	/*
	   switch(w){

		 case 1: x++;
				 break;
		 case 2:
		 case 3: y++;
				 break;
         case 4: x = 40;
		         break;
		 default: z++;
	   }
	*/
	__asm {

		cmp w, 1;
		je case01;

		cmp w, 2;
		jmp case03;

		cmp w, 3;
		je case03;

		cmp w, 4;
		je case04;

		jmp default01;

	case01: inc x;
		jmp endif01;

	case03: inc y;
		jmp endif01;

	case04: mov x, 40;
		jmp endif01;

	default01: inc z;

	endif01: nop;

	}

	printf("w = %d, x = %d, y = %d, z = %d. \n", w, x, y, z);

}
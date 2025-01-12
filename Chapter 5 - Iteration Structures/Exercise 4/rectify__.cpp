#include <stdio.h>

int main() {

	int ans, i, x, y;

	__asm {

		mov ans, 0;

		cmp y, 0;
		jne body01;

	if_body01:
		
		mov i, 1;

	do01:

		mov eax, ans;
		mov ebx, x;
		add eax, ebx;
		mov ans, eax;

		inc i;

	while01:

		mov edx, i;

		cmp edx, y;

		jle do01;

	}

}
#include <stdio.h>

int main() {


	int a, b, c, d;

	__asm {

		mov eax, 1;
		mov ebx, 2;
		mov ecx, 3;
		mov edx, 4;

		push eax;
		push ebx;
		push ecx;
		push edx;

		pop eax;
		pop ebx;
		pop ecx;
		pop edx;

		mov a, eax;
		mov b, ebx;
		mov c, ecx;
		mov d, edx;

	}

	printf("eax now contains %d.\n", a);
	printf("ebx now contains %d.\n", b);
	printf("ecx now contains %d.\n", c);
	printf("edx now contains %d.\n", d);


}
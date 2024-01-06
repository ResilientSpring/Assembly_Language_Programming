#include <iostream>
using namespace std;

int main() {

	int num1, num2;

	__asm {

		mov num1, 5
		mov eax, num1
		mov num2, eax
	}

	printf("num2 is %d\n", num2);

}
#include <iostream>
using namespace std;

int main() {

	int product, num1, num2;

	__asm {

		; product = num1 * num2

		mov num1, 2;
		mov num2, 5;

		mov eax, num1;  eax register must first be loaded with the number that needs to be multiplied.

		imul num2;  Then, the number to be multiplied by is placed into a register or memory outside the CPU.

		mov product, eax;  The lower - order bits of the product are placed into the eax register.
	}

	cout << "2 x 5 = " << product << endl;

}
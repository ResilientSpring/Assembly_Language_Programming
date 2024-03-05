#include <iostream>
using namespace std;

int main() {

	int product;
	
	// If num1 instead contained a negative 2 and num2 still contained a positive 5,
	int num1 = -2; 
	int num2 = 5;

	__asm {

		// The way the one-operand version of the signed multiplication instruction works is that 
		// the eax register must first be loaded with the number that needs to be multiplied.
		mov eax, num1;

		imul num2; Then, the number to be multiplied by is placed into a register or memory outside CPU.

		mov product, eax; The low-order bits of the product are placed into the eax register.
	}

	cout << "-2 x 5 = " << product << endl;
}
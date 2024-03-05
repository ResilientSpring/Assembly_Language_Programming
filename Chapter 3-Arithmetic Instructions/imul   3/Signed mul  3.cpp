#include <iostream>
using namespace std;

int main() {

	int product, num1, num2;

	__asm {

		mov num1, -2;
		mov num2, 5;

		mov eax, num1;

		imul num2;  // Note that with the one-operand imul instruction, there is no provision for an immeidate operand.

		mov product, eax; 

	}

	cout << "-2 x 5 = " << product << endl;
}
#include <iostream>
using namespace std;

int main() {

	int difference, num1 = 5, num2 = 7;

	__asm {

		; difference = num2 - num1

		mov eax, num2;   move num2 to eax

		sub eax, num1;   num1 is subtracted from eax

		mov difference, eax;
	}

	cout << "difference is " << difference << endl;

}
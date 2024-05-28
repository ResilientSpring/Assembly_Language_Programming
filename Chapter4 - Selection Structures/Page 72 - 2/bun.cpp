#include<iostream>
using namespace std;

int main() {

	int number = 5, amount = 8;

	if (number == 0)
		number--;

	// number is still 5.
	__asm {

		cmp number, 5;
		je then_01;
		jne then_02;
	    then_01: dec number;
	    then_02: nop;
	}

	cout << "number is " << number << endl;
}
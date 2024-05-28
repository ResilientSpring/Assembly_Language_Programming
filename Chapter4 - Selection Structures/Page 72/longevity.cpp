#include<iostream>
using namespace std;

int main() {

	int number = 5, amount = 8;

	if (number == 0)
		number--;

	// number is still 5.
	__asm {

		cmp number, 0;
		je then_01;
		jne end_if_01;
		then_01 : dec number;
		end_if_01: nop;
	}

	cout << "number is " << number << endl;
}
#include <iostream>
using namespace std;

int main() {

	int number, amount;

	number = 5;

	if (number == 5)
		number--;
	else
		;// do nothing (no operation)

	cout << "number is " << number << endl;

	// Remember, number is now 4.


	__asm {

	if01: cmp number, 5;   compare number and five
	then01 : dec number;   decrement number by one
	jne endif01;     jump not equal to endif01
	endif01 : nop; end if, no operation

	}

	cout << "number is " << number << endl;

}
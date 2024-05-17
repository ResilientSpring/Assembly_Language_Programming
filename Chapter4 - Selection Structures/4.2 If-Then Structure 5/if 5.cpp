#include <iostream>
using namespace std;

int main() {

	int number, amount;

	number = 5;

	__asm {

	if01: cmp number, 0;   compare number and zero
	jne endif01;     jump not equal to endif01
	then01 : dec number;   decrement number by one
	endif01 : nop; end if, no operation

	}

	cout << "number is " << number << endl;

}
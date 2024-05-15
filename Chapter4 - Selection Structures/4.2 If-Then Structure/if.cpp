#include <iostream>
using namespace std;

int main() {

	int number, amount;

	number = 0;

	__asm {

		.if number == 0
		dec number;
		.endif

	}

	cout << "number is " << number << endl;

}
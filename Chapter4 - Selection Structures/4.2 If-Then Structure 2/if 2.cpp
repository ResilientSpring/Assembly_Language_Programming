#include <iostream>
using namespace std;

int main() {

	int number, amount;

	number = 0;

	__asm {

		IF number == 0
		dec number;
		ENDIF

	}

	cout << "number is " << number << endl;

}
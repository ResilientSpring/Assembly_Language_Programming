#include <iostream>
using namespace std;

int main() {

	int number, amount;

	number = 5;

	__asm {

		#if number == 5
		dec number;
		#endif

	}

	cout << "number is " << number << endl;

}
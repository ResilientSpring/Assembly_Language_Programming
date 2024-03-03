#include <iostream>
using namespace std;

int main() {

	int quotient;
	int remainder;

	int answer;
	int number;
	int amount;

	__asm {

		; answer = number / amount

		mov number, 5;

		mov amount, 2;

		mov eax, number;

		cdq;  convert double word into quad word

		idiv amount;  divide(edx : eax) by amount

		mov answer, eax;
	}

	cout << answer << endl;
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;
}
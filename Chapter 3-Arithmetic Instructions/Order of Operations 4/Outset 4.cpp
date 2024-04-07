#include <iostream>
using namespace std;

int main() {

	int quotient, remainder, num3, num4;

	__asm {

		; result = num3 / (num4 - 2);

		mov num3, 20;
		mov num4, 11;

		sub num4, 2;
		mov eax, num3;
		cdq;
		idiv num4;
		mov result, eax;
		mov remainder, edx;
	}

	cout << "The quotient is " << quotient << endl;
	cout << "The remainder is " << remainder << endl;


}
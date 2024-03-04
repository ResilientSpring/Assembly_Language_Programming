#include <iostream>
using namespace std;

int main() {

	int diff, num1, num2;

	__asm {

		mov num1, 7;
		mov num2, 5;

		mov eax, num1;

		sub eax, num2;   subtract num2 from eax

		mov diff, eax;

	}

	cout << "7 - 5 = " << diff << endl;
}
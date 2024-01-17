#include <iostream>
using namespace std;

int main() {

	int sum, num1 = 9, num2 = 5;

	__asm {

		; sum = num1 + num2

		mov sum, 0;
		mov eax, num1;
		add sum, eax;
		mov eax, num2;
		add sum, eax;

	}

	cout << "sum is " << sum << endl;

}
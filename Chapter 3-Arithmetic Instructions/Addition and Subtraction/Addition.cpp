#include <iostream>
using namespace std;

int main() {

	int num1 = 9, num2 = 5, sum;

	sum = num1 + num2;

	cout << "sum is " << sum << endl;

	sum = 0;

	__asm {

		mov eax, num1;
		add eax, num2;
		mov sum, eax;
	}

	cout << "\nsum is " << sum << endl;
}
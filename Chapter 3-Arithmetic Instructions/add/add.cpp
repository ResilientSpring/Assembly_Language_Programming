#include <iostream>
using namespace std;

int main() {

	int sum, num1, num2;

	__asm {

		mov num1, 5;
		mov num2, 7;

		mov eax, num1;

		add eax, num2;   add num2 to eax

		mov sum, eax; 

	}

	cout << "sum is " << sum << endl;
}
#include <iostream>
using namespace std;

int main() {

	int sum, num1, num2;

	__asm {

		mov eax, 8;
		add eax, 10;
		mov sum, eax;

	}

	cout << sum << endl;
}
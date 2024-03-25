#include <iostream>
using namespace std;

int main() {

	int answer, num1, num2;

	__asm {

		; answer = num1 - 3 + num2;

		mov num1, 20;
		mov num2, 11;

		sub num1, -3;
		mov eax, num1;
		add eax, num2;
		mov answer, eax;
	}

	cout << "answer is " << answer << endl;
}
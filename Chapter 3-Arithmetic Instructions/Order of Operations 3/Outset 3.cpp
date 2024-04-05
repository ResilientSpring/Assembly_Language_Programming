#include <iostream>
using namespace std;

int main() {

	int answer, num1, num2;

	__asm {

		; answer = num1 - 3 x num2;

		mov num1, 20;
		mov num2, 11;

		mov eax, (-3); 
		imul num2;
		add eax, num1;
		mov answer, eax;
	}

	cout << "answer is " << answer << endl;
}
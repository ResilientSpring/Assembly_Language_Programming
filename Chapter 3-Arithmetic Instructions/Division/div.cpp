#include <iostream>
using namespace std;

int main() {

	int num1, num2, result;

	__asm {

		mov num1, 10;
		mov num2, 5;

		mov eax, num1;

		div num2;   This divides the value in the dividend register(s)by divisor [1]

		mov result, eax; 
	}

	cout << "num1 / num2 = " << result << endl;
}

// Reference:
// 1. https://en.wikibooks.org/wiki/X86_Assembly/Arithmetic
#include <iostream>
using namespace std;

int main() {

	int num1, num2, result;

	__asm {

		mov num1, 5;
		mov num2, 7;

		mov eax, num1;

		imul num2;  multiply eax by num2

		mov result, eax;  move the content of eax to result


	}


	cout << "num1 x num2 = " << result << endl;

}

// Reference: https://en.wikibooks.org/wiki/X86_Assembly/Arithmetic
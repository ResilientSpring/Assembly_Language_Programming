#include <iostream>
using namespace std;

int main() {

	int num1, num2, result;

	__asm {

		mov num1, 10;
		mov num2, 5;

		mov eax, num1;

		div num2;


	}


}
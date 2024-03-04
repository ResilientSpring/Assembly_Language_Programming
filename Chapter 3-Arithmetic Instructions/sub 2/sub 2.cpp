#include <iostream>
using namespace std;

int main() {

	int difference, num1, num2;

	__asm{

		mov eax, 27;
		sub eax, 15;
		mov difference, eax;
	}

	cout << "27 - 15 = " << difference << endl;
}
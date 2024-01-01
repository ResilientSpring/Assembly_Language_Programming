#include <iostream>
using namespace std;

int main() {

	char letter1, letter2;

	__asm {

		mov letter1, 'A'
		mov ax, letter1
		mov letter2, ax

	}

	cout << "letter2 is " << letter2 << endl;

}
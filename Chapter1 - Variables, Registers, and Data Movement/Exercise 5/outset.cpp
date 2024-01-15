#include <iostream>
using namespace std;

int main() {

	char a = 'B';
	
	char d = 'E';
	char e;

	char b;

	__asm {

		mov al, d
		mov e, al

	}

	cout << "e is " << e << endl;

//	d = 'z';

	__asm {

		mov d, 'z'
		mov al, d
		mov a, al
		mov b, al

	}

	cout << "d = " << d << "\na = " << a << "\nb = " << b << endl;

	__asm {

		mov a, '2'
		mov b, '?'
		mov al, b
		mov a, al
	}

	cout << "\na = " << a << endl;

}
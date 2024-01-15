#include <iostream>
using namespace std;

int main() {

	char a = 'B';
	
	char d = 'E';
	char e;

	__asm {

		mov al, d
		mov e, al

	}

	cout << "e is " << e << endl;

}
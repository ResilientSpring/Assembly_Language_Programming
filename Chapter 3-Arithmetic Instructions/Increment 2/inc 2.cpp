#include <iostream>
using namespace std;

int main() {

	int x = 0;
	int y = 2;

	// x = ++y;
	// can be broken down into 
	// y = y + 1;
	// x = y; 


	__asm {

		inc y;
		mov eax, y;
		mov x, eax;

	}

	cout << "x is now " << x << endl;
	cout << "y is now " << y << endl;
}
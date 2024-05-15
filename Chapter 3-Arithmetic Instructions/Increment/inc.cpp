#include <iostream>
using namespace std;

int main() {

	int x = 0;
	int y = 2;

	// x = y++;
	// is the same as 
	// x = y;
	// y = y + 1;

	__asm {

		mov eax, y;
		mov x, eax;
		inc y;

	}

	cout << "x is now " << x << endl;
	cout << "y is now " << y << endl;

}
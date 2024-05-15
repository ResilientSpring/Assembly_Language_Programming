#include <iostream>
using namespace std;

int main() {

	int x;
	int y = 3;
	int z = 4;

	__asm {

		; x = -y + z;

		neg y;
		mov eax, y;
		add eax, z;
		mov x, eax;

	}

	cout << "x = -y + z; " << endl;
	cout << "x is now " << x << endl;
}
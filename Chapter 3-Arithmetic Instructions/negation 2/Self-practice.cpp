#include <iostream>
using namespace std;

int main() {


	int x;
	int y;
	int z;


	__asm {

		; x = -(y + z);

		mov y, 3;
		mov z, 4;

		mov eax, y;
		add eax, z;
		neg eax;
		mov x, eax;

	}

	cout << "x is now " << x << endl;
}
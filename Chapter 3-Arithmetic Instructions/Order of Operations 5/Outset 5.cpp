#include <iostream>
using namespace std;

int main() {

	int v, w, x, y, z;

	__asm {

		// v = -w + x * y - z++;

		mov w, 1;
		neg w;
		mov x, 2;
		mov y, 3;
		mov z, 4;

		mov eax, x;
		imul y;

	}

}
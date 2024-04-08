#include <iostream>
using namespace std;

int main() {

	int v, w, x, y, z;

	__asm {

		// v = -w + x * y - z++;

		mov w, 1;

		// -(w)
		neg w;
		
		mov x, 2;
		mov y, 3;
		mov z, 4;

		// z++
		inc z;

		// x * y
		mov eax, x;
		imul y;

		// (x * y) + (-w)
		add eax, w;

	}

}
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
		// inc z;

		// x * y
		mov eax, x;
		imul y;

		// (x * y) + (-w)
		add eax, w;

		// [(x * y) + (-w)] - z
		sub eax, z;

		// z++
		inc z;

		// v = [(x * y) + (-w)] - z
		mov v, eax;

	}

	cout << "v is " << v << endl;

	int a, b, c, d, e;

	b = 1, c = 2, d = 3, e = 4;

	a = -b + c * d - e++;

	cout << "a = " << a << endl;
}
#include <iostream>
using namespace std;

int main() {


	int i = 1;
	int x, y;
	int a, b;
	int c = 2;

	__asm {

		mov b, c
		mov a, b
		mov y, 1
		mov x, y
	}

	cout << "a = " << a << "\nb = " << b << "c = " << c << "\nx = " << x << "\ny = " << y << "\n";
}
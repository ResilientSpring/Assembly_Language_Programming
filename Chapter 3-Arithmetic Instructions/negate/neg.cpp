#include <iostream>
using namespace std;

int main() {

	int x;
	int y = 2;

	__asm {

		; y = -y;

		neg y;

	}

	cout << "y is now " << y << endl;
}
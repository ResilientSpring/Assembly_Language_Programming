#include <iostream>
using namespace std;

int main() {

	int y = 2;

	__asm {

		neg y;

	}

	cout << "y is now " << y << endl;
}
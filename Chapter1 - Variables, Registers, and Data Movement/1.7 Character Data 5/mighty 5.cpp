#include <iostream>
using namespace std;

int main() {

	char letter1, letter2;

	__asm {

		mov letter1, 'A'
		mov ax, letter1
		mov letter2, ax

	}  // error, the 8-bit letter2 cannot swallow the 16-bit ax.

	cout << "letter2 is " << letter2 << endl;

}
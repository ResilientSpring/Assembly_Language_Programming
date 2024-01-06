#include <iostream>
using namespace std;

int main() {

	char letter1, letter2;

	__asm {

		mov letter1, 'C'
		mov eax, letter1
		mov letter2, eax

	} // error, the 8-bit letter2 cannot swallow the 32-bit eax.

	cout << "letter2 is " << letter2 << endl;  
	
}
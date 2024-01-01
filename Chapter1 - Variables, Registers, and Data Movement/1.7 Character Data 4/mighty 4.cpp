#include <iostream>
using namespace std;

int main() {

	char letter1, letter2;

	__asm {

		mov letter1, 'C'
		mov eax, letter1
		mov letter2, eax

	} // error, eax is 64-bit but embedded assembly only accepts 32-bit.

	cout << "letter2 is " << letter2 << endl;  
	
}
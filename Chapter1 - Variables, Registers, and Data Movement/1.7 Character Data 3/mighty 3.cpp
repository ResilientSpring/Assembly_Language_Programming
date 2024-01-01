#include <iostream>
using namespace std;

int main() {

	char grade1;
	char grade2 = 'A';
	const char grades[10] = "ABC";
	const char name[10] = "Abe";

	char letter1 = 'A', letter2;

	__asm {
	
		mov al, letter1;
		mov letter2, al;
	
	}
	
	cout << "letter2 is " << letter2 << endl;

}
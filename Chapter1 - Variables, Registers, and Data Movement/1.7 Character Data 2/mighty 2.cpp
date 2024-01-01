#include <iostream>
using namespace std;

int main() {

	__asm {
		
		.data
		grade1 byte ?
		grade2 byte 'A'
		grades byte 'A', 'B', 'C'
		name   byte 'Abe'

	}

}
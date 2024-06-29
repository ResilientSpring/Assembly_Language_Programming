#include <iostream>
using namespace std;

int main() {

	int count = 12, number = 34, flag;

	__asm {

		; if count > number
		mov eax, count;
		cmp eax, number;
		jg then01;
	then01: mov flag, eax;
		else01:

	}

}
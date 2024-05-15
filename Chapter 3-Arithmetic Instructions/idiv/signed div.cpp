#include <iostream>
using namespace std;

int main() {

	int answer;
	int number = 5;
	int amount = 2;

	__asm {

		; answer = number / amount

		mov eax, number;   

		cdq;  convert double word into quad word

		idiv amount;  divide (edx : eax) by amount

		mov answer, eax; 
	}

	cout << answer << endl;

}
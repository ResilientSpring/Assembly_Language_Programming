#include<iostream>
using namespace std;

int main() {

	int count = 0, amount = 8;

	if (amount != 0) {

		count++;
		amount = amount + 2;
	}
		
	cout << "amount is " << amount << "; count is " << count << endl;
	
	__asm {

		cmp number, 0;
		jne then_02;
	    then_01: dec number;
	    then_02:;
	}

	cout << "number is " << count << endl;
}
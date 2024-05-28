#include<iostream>
using namespace std;

int main() {

	int count = 0, amount = 8;

	if (amount != 1) {

		count++;
		amount = amount + 2;
	}
		
	cout << "amount is " << amount << "; count is " << count << endl;
	
	count = 0;
	amount = 8;

	__asm {

		cmp amount, 1;
		je then_01;
		jne then_02;
	    then_01: ;
	    then_02: inc count;
		         add amount, 2;
	}

	cout << "amount is " << amount << "; count is " << count << endl;
}
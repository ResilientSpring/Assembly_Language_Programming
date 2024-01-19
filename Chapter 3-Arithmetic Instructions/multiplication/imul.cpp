#include <iostream>
using namespace std;

int main() {

	int num1, num2, result;

	__asm {

		mov num1, 5;
		mov num2, 7;

		imul result, num1, num2;

	}


	cout << "num1 x num2 = " << result << endl;

}
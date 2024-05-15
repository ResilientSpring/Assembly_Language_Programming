#include <iostream>
using namespace std;

int main() {


	__asm {

		printf PROTO arg1 : Ptr Byte

		msg1   byte "Hello World!", 0Ah, 0

		INVOKE printf, ADDR msg1

	}



}
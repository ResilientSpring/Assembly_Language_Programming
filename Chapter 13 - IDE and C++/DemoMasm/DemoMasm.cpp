#include <stdio.h>
extern "C" int fcnsum(int[], int);
extern "C" void thesum(int*, int[], int);

int main() {
	int count = 3, totalA, totalB, tstdat[] = { 11, 45, 70 };
	thesum(&totalA, tstdat, 3);
	totalB = fcnsum(tstdat, count);
	printf("Sum from subroutine = %d\n", totalA);
	printf("Sum from function = %d\n", totalB);
	

	return 0;
}


// Reference:
// What is "stdafx.h" used for in Visual Studio?
// https://stackoverflow.com/questions/4726155/what-is-stdafx-h-used-for-in-visual-studio
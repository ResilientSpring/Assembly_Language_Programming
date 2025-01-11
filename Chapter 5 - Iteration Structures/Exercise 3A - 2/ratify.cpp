#include <stdio.h>

int main() {

	int counter = 0;
	int i = 2;

	while (i < 8) {

		counter++;

		i = i + 2;
	}

	printf("The counter is now %d.\n", counter);

	i = 2;
	counter = 0;

	for (; i < 8; i += 2) {

		counter++;

	}

	printf("The counter is now %d.\n", counter);



}
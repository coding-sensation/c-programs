// This C Program generates a random integer between 0 and 9.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int randomInteger;

	randomInteger = rand() % 10;
	printf("The random integer is %d.\n", randomInteger);
}

// OUTPUT
// The random integer is 7.
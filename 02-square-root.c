// This C Program calculates the square root of a number.

#include <stdio.h>
#include <math.h>

int main() {
	int number;
	printf("Enter an integer: ");

	// Takes the input from the user
	scanf("%d", &number);

	printf("The square root of %d is %0.3f.\n", number, sqrt(number));
}

// OUTPUT EXAMPLE
// Enter an integer: 81
// The square root of 81 is 9.000.

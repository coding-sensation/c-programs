// This C Program calculates the square root

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	// Takes the input from the user
	float number;
	printf("Enter a number: ");
	scanf("%f", &number);

	// The square root of the given number
	float square_root = sqrt(number);

	printf("the square root of %0.3f is %0.3f", number, square_root);
}

// OUTPUT EXAMPLE
// Enter a number: 81
// The square root of 81.000 is 9.000

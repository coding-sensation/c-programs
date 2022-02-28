// This C Program calculates the sum of digits of an integer.

#include <stdio.h>

int main() {
	int sum = 0;
	int n, m;

	printf("Enter an integer with multiple digits: ");
	scanf("%d", &n);

	while (n > 0) {
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}

	printf("The sum of the digits entered is %d.\n", sum);
}

// OUTPUT EXAMPLE
// Enter a number: 1234
// The sum of digits is 10.
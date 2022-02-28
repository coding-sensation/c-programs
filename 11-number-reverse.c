// This C Program reverses the entered integer.

#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number > 0) {
        int remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }

    printf("The entered integer reversed is %d.\n", reverse);
}

// OUTPUT EXAMPLE
// Enter a positive integer 12345
// The entered integer reversed is 54321.
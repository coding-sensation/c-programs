// This C Program checks if a number is odd or even.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is an even number.\n", number);
    else
        printf("%d is an odd number.\n", number);
}

// OUTPUT EXAMPLE
// Enter a number: 7
// 7 is an odd number.
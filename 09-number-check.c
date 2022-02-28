// This C Program checks if a number is positive or negative.

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("The number you entered is a positive number.\n");
    else if (number == 0)
        printf("The number you entered is zero.\n");
    else
        printf("The number you entered is a negative number.\n");
}

// OUTPUT EXAMPLE
// Enter a number: -3
// You entered a negative number.
// This C Program swaps two numbers.

#include <stdio.h>

int main() {
    int x, y, tmp;

    printf("Enter a value for x and y: ");
    scanf("%d %d", &x, &y);

    // Swaps both numbers
    tmp = x;
    x = y;
    y = tmp;

    printf("x = %d.\ny = %d.\n", x, y);
}

// OUTPUT EXAMPLE
// Enter a value for x and y: 23 7
// x = 7.
// y = 23.
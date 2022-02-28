// This C Program converts kilometers to miles.

#include <stdio.h>

int main() {
    float kilometers;
    printf("Enter a number to convert: ");
    scanf("%f", &kilometers);

    // Initializes the conversion factor
    float conversionFactor = 0.621371;

    // Converts kilometers to miles
    float miles = kilometers * conversionFactor;
    printf("%0.2f kilometers is equal to %0.2f miles.\n", kilometers, miles);
}

// OUTPUT EXAMPLE
// Enter a number to convert: 23
// 23.00 kilometers is equal to 14.29 miles.
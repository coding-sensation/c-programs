// This C Program converts the temperature in Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius;
    printf("Enter a number to convert: ");
    scanf("%f", &celsius);

    // Converts Celcius to Fahrenheit
    float fahrenheit = (celsius * 1.8) + 32;
    printf("%0.1f degrees in Celsius is equal to %0.1f degrees in Fahrenheit.\n", celsius, fahrenheit);
}

// OUTPUT EXAMPLE
// Enter a number to convert: 37.7
// 37.7 degrees in Celsius is equal to 99.9 degrees in Fahrenheit.
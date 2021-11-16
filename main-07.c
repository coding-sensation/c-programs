// This C Program converts the temperature in Celsius to Fahrenheit

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

// Input a value for kilometers
float celsius;
printf("Enter a temperature value: ");
scanf("%f", &celsius);

// Convert to Fahrenheit
float fahrenheit = (celsius * 1.8) + 32;
printf("%0.1f degrees in Celsius is equal to %0.1f degrees in Fahrenheit.", celsius, fahrenheit);

}

// OUTPUT EXAMPLE
// Enter a temperature value: 37.7
// 37.7 degrees in Celsius is equal to 99.9 degrees in Fahrenheit.
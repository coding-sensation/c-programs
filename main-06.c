// This C Program converts kilometers to miles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

// Input a value for kilometers
float kilometers;
printf("Enter value in kilometers: ");
scanf("%f", &kilometers);

// Initialize the conversion factor
float conversion_factor = 0.621371;

// Convert kilometers to miles
float miles = kilometers * conversion_factor;
printf("%0.2f kilometers is equal to %0.2f miles.", kilometers, miles);

}

// OUTPUT EXAMPLE
// Enter value in kilometers: 23
// 23.00 kilometers is equal to 14.29 miles.
// This C Program finds the area of a triangle

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float a, b, c;

printf("Enter first side: ");
scanf("%f", &a);
printf("Enter second side: ");
scanf("%f", &b);
printf("Enter third side: ");
scanf("%f", &c);

// Calculate the semi-perimeter
float s = (a + b + c) / 2;

// Calculate the area 
float area = sqrt(s * (s - a) * (s - b) * (s-c));
printf("The area of the triangle is %0.2f.", area);

}

// OUTPUT EXAMPLE
// Enter first side: 5
// Enter second side: 6
// Enter third side: 7
// The area of the triangle is 14.70.
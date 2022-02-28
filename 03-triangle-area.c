// This C Program finds the area of a triangle

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculates the semi-perimeter
    float s = (a + b + c) / 2;

    // Calculates the area 
    float area = sqrt(s * (s - a) * (s - b) * (s-c));

    printf("The area of the triangle is %0.2f.", area);
}

// OUTPUT EXAMPLE
// Enter three sides: 5 6 7
// The area of the triangle is 14.70.
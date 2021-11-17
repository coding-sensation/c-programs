// This C Program swaps two numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x, y, tmp;

printf("Enter a value for x: ");
scanf("%d", &x);
printf("Enter a value for y: ");
scanf("%d", &y);


// Swap the two numbers
tmp = x;
x = y;
y = tmp;

// Display the numbers after swapping them 
printf("x = %d. \n", x);
printf("y = %d. \n", y);

}

// OUTPUT EXAMPLE
// Enter a value for x: 23
// Enter a value for y: 7
// x = 7.
// y = 23.
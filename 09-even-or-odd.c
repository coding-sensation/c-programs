// This C Program checks if a number is odd or even

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int number;      
printf("Enter a number: ");    
scanf("%d", &number);

if(number % 2 == 0)
printf("%d is an even number.",number);    

else
printf("%d is an odd number.",number);

}

// OUTPUT EXAMPLE
// Enter a number: 7
// 7 is an odd number.
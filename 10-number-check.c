// This C Program checks if a number is positive, negative or zero

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int number;      
printf("Enter a number: ");    
scanf("%d", &number);

if(number > 0)
printf("You entered a positive number.");  

else if(number == 0)
printf("You entered zero.");

else
printf("You entered a negative number.");

}

//  OUTPUT EXAMPLE
// Enter a number: -3
// You entered a negative number.
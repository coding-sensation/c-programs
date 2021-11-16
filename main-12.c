// This C Program reverses the entered number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int number, reverse = 0;  
//input a number  
printf("Enter a number:");    
scanf("%d",&number); 
  
while(number > 0)    
{    
int remainder = number % 10;    
reverse = (reverse * 10) + remainder;    
number = number / 10;    
}   

printf("The reverse of the entered number is %d",reverse);    

}

//  OUTPUT EXAMPLE
// Enter a number: 12345
// The sum of digits is 54321.
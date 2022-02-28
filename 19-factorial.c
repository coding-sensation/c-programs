// This C Program finds the factorial of a given number.
#include <stdio.h>

int main()    
{    
 int i,fact=1,number;

 printf("Enter a positive integer: ");  

  scanf("%d",&number);    

    for(i = 1; i <= number; i++){ 

      fact=fact*i;    
  }    
  printf("The factorial of %d is: %d",number,fact);    
 
}   

// OUTPUT EXAMPLE
// Enter a positive integer :5
// The factorial of 5 is: 120.




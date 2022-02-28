// This C Program finds the LCM of two numbers.
#include <stdio.h>

int main()
{
   int number1, number2, max;
  
   printf("Enter two positive integers :");
   scanf("%d %d", &number1, &number2);
  
   max=(number1>number2) ? number1 : number2;

   while(1){

       if(max%number1==0 && max%number2==0){

           printf("the least common denominator of %d and %d is %d.", number1, number2,max);
           break;      
       }
       ++max;
   }
  
}


// OUTPUT EXAMPLE
// Enter two positive integers :22 33
//the least common denominator of 22 and 33 is 66.




// This C Program finds the GCD of two numbers.
#include <stdio.h>

int main(){
    int number1, number2, hcf;
    
 printf("Enter two integers :");
    scanf("%d %d", &number1, &number2);
    
 for( int i=1; i<=number1 || i<=number2; ++i){
        if(number1 % i == 0 && number2 % i == 0)
            hcf = i;
    }
    printf("the highest common factor of %d and %d is %d.", number1, number2, hcf);
   
}


// OUTPUT EXAMPLE
// Enter two integers : 11 121
//the highest common factor of 11 and 121 is 11.




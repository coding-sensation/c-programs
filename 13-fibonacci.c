// This C Program displays the first n terms of the Fibonacci series

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int count, firstTerm = 0, secondTerm = 1, nextTerm, i;
 
    //Ask user to input the number of terms 
    printf("Enter the numbers of terms: ");
    scanf("%d", &count);
 
    printf("First %d terms of Fibonacci series:\t",count);
    for ( i = 0 ; i < count ; i++ ){

       if ( i <= 1 )
          nextTerm = i;

       else{
          nextTerm = firstTerm + secondTerm;
          firstTerm = secondTerm;
          secondTerm = nextTerm;
       }

       printf("%d \t",nextTerm);
    }
 
    return 0;
}

//  OUTPUT EXAMPLE
// Enter the numbers of terms: 5
// First %d terms of Fibonacci series: 0 1 1 2 3
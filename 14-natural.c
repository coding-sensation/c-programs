// This C Program returns the sum of the first n natural numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, sum = 0;
    // Input a number
    printf("Enter a number (positive integer): ");
    scanf("%d",&n);

    // Add the numbers all the way from1 to the given number
    for(i=1; i <= n; i++){
        sum = sum + i;
    }

    // Output the sum
    printf("Sum of first %d natural numbers is: %d.",n, sum);

    return 0;
}

//  OUTPUT EXAMPLE
// Enter a number (positive integer): 21
// Sum of first 21 natural numbers is: 231.
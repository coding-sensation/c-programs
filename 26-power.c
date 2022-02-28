// This C Program that calculates the power of a number.

#include <stdio.h>

int main() {
    int num, exponent, result = 1;

     
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    for(int i = 1; i <= exponent; i++){
      result = result * num;
    }

    printf("%d ^ %d = %d.",num, exponent, result);
    
}

// OUTPUT EXAMPLE
// Enter a num number: 4
// Enter an exponent: 2
// 4 ^ 2 = 16.





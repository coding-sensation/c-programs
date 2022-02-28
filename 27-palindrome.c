// This C Program checks if a given number is palindrome.

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;


    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);


    else
        printf("%d is not a palindrome.", original);

   
}
// OUTPUT EXAMPLE
// Enter a number: 121     
// 121 is a palindrome





// This C Program swaps two numbers without using a third variable.

#include <stdio.h>

int main(){

  int a, b;

  printf("Enter the two numbers you want to swap: ");
  scanf("%d%d", &a, &b);


  printf("Before swaping the two numbers: a = %d & b = %d.", a, b);

 a=a+b;
 b=a-b;
 a=a-b;


printf("\nafter swapping the two numbers: a = %d & b = %d.", a, b);
 
}

// OUTPUT EXAMPLE
// Enter the two numbers you want to swap: 33 88
// Before swaping the two numbers: a = 33 & b = 88.
// after swapping the two numbers: a = 88 & b = 33.




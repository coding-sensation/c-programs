// This C Program  converts an input byte value to a bit value, or vice-versa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 char input[50]; 
	int value, result;

  printf("Enter byte or bit: ");
  scanf("%s", input);

  if(strcmp(input,"byte") == 0 || strcmp(input,"Byte") == 0){

  printf("Enter the value you want to convert: ");
  scanf("%d", &value);

  result = value * 8;

  printf("The value in bits of the entered byte value is %d", result);

     }
  
  else if(strcmp(input,"bit") == 0 || strcmp(input,"Bit") == 0){
     printf("Enter the value you want to convert: ");
  scanf("%d", &value);

  result = value / 8;

  printf("The value in bytes of the entered bit value is: %d", result);
  }

  else{
    printf("Error: Wrong input.");
  }

}
 
// OUTPUT EXAMPLE
// Enter a byte or bit: byte
// Enter the value you want to convert: 8
// The value in bit of the entered byte value is 64.

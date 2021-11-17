// This C Program converts a decimal to a binary number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int a[10],n,i;

// Input a value for Decimal      
printf("Enter the number to convert: ");    
scanf("%d", &n);

// Convert the number to Binary
for(i=0; n>0; i++){    
a[i]=n%2;    
n=n/2;    
}  

printf("Binary of Given Number is: ");

for(i=i-1; i>=0; i--){    
printf("%d", a[i]);    
}  

}

// OUTPUT EXAMPLE
// Enter the number to convert: 7
// Binary of Given Number is: 111.
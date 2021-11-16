// This C Program calculates the sum of digits

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int sum = 0;
int n, m;  

// Enter a number  
printf("Enter a number: ");    
scanf("%d",&n); 

// Separate the digits   
while(n > 0){    
	m = n % 10;    
	sum = sum + m;    
	n = n / 10;    
}   

printf("The sum of digits is %d.", sum);    

}

// OUTPUT EXAMPLE
// Enter a number: 1234
// The sum of digits is 10.
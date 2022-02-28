// This C Program checks if a given character is contained in a given String

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 char string[50],ch; 
	int i;
	printf("Enter a string: "); 
	scanf("%s",string);

	printf("Enter a character: "); 
	scanf(" %c",&ch); 

	for( i = 0; i < strlen(string) && string[i] != ch; ++i); 
	if(i<strlen(string)) 
		printf("String contains input character.\n");  

	else 
		printf("String doesn't contain input character.\n"); 

}
 
// OUTPUT EXAMPLE
// Enter a string: Character
// Enter a character: r
// String contains input character.

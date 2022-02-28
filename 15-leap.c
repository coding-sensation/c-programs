// This C Program checks if the given year is a leap year or not.

#include <stdio.h>
#include <stdlib.h>

int main() {
 int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year % 4 == 0){
    
        if( year % 100 == 0){
            if ( year % 400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year);
    }
    else
        printf("%d is not a leap year.", year);


}

 
// OUTPUT EXAMPLE
// Enter year: 1991
// 1991 is not a Leap Year

// This C Program converts the number of days into year : month : day

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int d;
 
    printf("Enter number of days to convert : ");
    scanf("%d", &d);
    int y = 0, m = 0;
 
    //calculate number of years in integer format
     y = (d - d % 365) / 365;
    //get number of days after getting number of years
    d = d % 365;
    //calculate number of monthes in integer format
    m = (d - d % 30) / 30;
    //get number of days after getting number of month
    d = d % 30;

  printf("%d : %d : %d \n",y,m,d);
}

// OUTPUT EXAMPLE
//Enter number of days to convert : 984
//2 : 8 : 14
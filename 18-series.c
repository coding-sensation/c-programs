// This C Program finds the sum of the series (1)+(1+2)+(1+2+3)+(1+2+3+...+n)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, sum, total = 0;
 
    printf("Enter the value for nth term: ");
    scanf("%d", &n);
 
    for(int i = 1; i <= n; i++){

      sum = 0;

      for(int j = 1; j <= i; j++){
          total += j;
          sum += j;
          printf("%d",j);
          if( j < i){
            printf(" + ");
          }
      }
      printf(" = %d \n",sum);
    }

    printf("\nThe sum of the above series is: %d \n",total);
}

// OUTPUT EXAMPLE
//Enter the value for nth term: 8
//1 = 1
//1+2 = 3
//1+2+3 = 6
//1+2+3+4 = 10
//1+2+3+4+5 = 15
//1+2+3+4+5+6 = 21
//1+2+3+4+5+6+7 = 28
//1+2+3+4+5+6+7+8 = 36
//The sum of the above series is: 120
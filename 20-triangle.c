// This C Program prints a right triangle using numbers.
#include <stdio.h>

int main(){    

 int i,j,n;

printf("Enter a positive integer: ");
scanf("%d",&n);

for(i=0;i<=n;i++){

  for(j=1;j<=i;j++){
    
    printf("%d",i);
    
  }
  printf("\n");
}
}   

// OUTPUT EXAMPLE
// Enter a positive integer :6
// 1
// 22
// 333
// 4444
// 55555
// 666666




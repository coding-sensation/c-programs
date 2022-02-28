// This C Program implements the Bubble Sort Algorithm.

#include <stdio.h>

int main(){

  int array[100], n, c, d, swap;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
  printf("Enter element #%d ", i+1);
  scanf("%d",&array[i]);
    }
  

  for (c = 0 ; c < n - 1; c++){

    for (d = 0 ; d < n - c - 1; d++){

      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\t", array[c]);

  return 0;
}
// OUTPUT EXAMPLE
// Enter number of elements: 5
// Enter element #1: 44
// Enter element #2: 22
// Enter element #3: 77
// Enter element #4: 55
// Enter element #5: 888
// Sorted list in ascending order:
// 22  44  55  77  888





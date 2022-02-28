// This C Program that determines the size of each data type.

#include <stdio.h>

int main() {
    int intType;

    float floatType;

    double doubleType;

    char charType;

    printf("Size of int: %zu bytes.\n", sizeof(intType));

    printf("Size of float: %zu bytes.\n", sizeof(floatType));

    printf("Size of double: %zu bytes.\n", sizeof(doubleType));

    printf("Size of char: %zu byte.\n", sizeof(charType));

    
  
}

// OUTPUT EXAMPLE
// Size of int: 4bytes.
// Sizeof float: 4 bytes.
// Size of double: 8 bytes.
// Size of char: 1byte.




#include <stdio.h>

int main()
{
    int A[5];

    // printf("%p\n", A);
    printf("%p\n", (void *)A); // type int *
    printf("%p\n", &A);        // type int (*)[5]  (pointer to an array of 5 ints)
    /*
    Although A and &A have the same numeric address, they have different types, so pointer arithmetic behaves differently.

For example:

A + 1

moves by one int:

1004

while

&A + 1

moves by one entire array:

1000 + 5*sizeof(int)
=1020
    */
    printf("%p\n", A + 1);   // type int *
    printf("%d\n", *A);    // type int %d 
    return 0;
}
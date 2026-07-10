#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[3] = {11,22,34};

    int *arr1 = malloc(sizeof(int)*3);

    int B[2][3] = {
        {2,4,6},
        {3,6,9}
    };

    // printf("Size of arr is %zu\n", sizeof(arr));  // prints 12 i.e. 3 int = 3x4 = 12
    // printf("Size of arr1 is %zu\n", sizeof(arr1));  // Faaaahh this prints 4 becoz it is the pointer to the 1st element address in heap memory 

    // printf("%p\n", B);
    // printf("%p\n", &B[0]);
    // printf("%p\n", &B[0][0]);

    printf("%p\n", B);
    printf("%p\n", B+1);
    printf("%p\n", *(B+1));
    printf("%p\n", &B[1][0]);
    printf("%p\n", B[1]);
    

    return 0;
}
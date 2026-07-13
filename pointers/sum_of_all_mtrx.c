#include <stdio.h>

int main(){
    int r=2, c=2, sum=0;
    // int arr[2][2] = {
    //     {1,2},
    //     {3,4},
    // };
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int* ptr = &arr[0][0];   // types arr -> int[3] arr is array object but in most expression arr decays to &arr[0] which is of an int * type

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         sum = sum + (*(arr[i] + j));
    //     }
    // }
    // printf("Sum of all elements in matrix is %d\n", sum);

    for (int i = 0; i < 9; i++)
    {
        sum += *ptr;
        printf("%d, ", *ptr++);
    }
    printf("\nSum of all elements in matrix is %d\n", sum);

    return 0;
}
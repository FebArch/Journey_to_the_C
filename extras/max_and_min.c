/*
arr is a pointer to an array of 5 integers.

*arr is the array of 5 integers that arr points to.
*/

#include <stdio.h>

int findMin(int (*arr)[5], int row, int col);
int findMax(int (*arr)[5], int row, int col);

int main()
{
    int row = 4, col = 5;
    int arr[4][5] = {
        {11, 21, 13, 14, 5},
        {11, 22, 33, 144, 55},
        {10, 20, 30, 40, 50},
        {10, 22, 12, 91, 3},
    };

    int minResult = findMin(&arr[0], 4, 5);
    printf("Smallest number in %dx%d matrix is: %d\n", row, col, minResult);

    int maxResult = findMax(&arr[0], 4, 5);
    printf("Largest number in %dx%d matrix is: %d\n", row, col, maxResult);
    
    // int minResult = findMax(arr, 4, 5);
    return 0;
}

int findMin(int (*arr)[5], int row, int col)
{
    int min = *(*arr);   // arr is NOT a pointer to an int. It is a pointer to an array of 5 ints.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*(*(arr+i) + j) < min)
            {
                min = *(*(arr+i)+j);
            }
        }
    }
    return min;
}

int findMax(int (*arr)[5], int row, int col){
    int max = arr[0][0];   // arr is NOT a pointer to an int. It is a pointer to an array of 5 ints.

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*(*(arr+i) + j) > max)
            {
                max = *(*(arr+i)+j);

            }
            
        }
        
    }
    return max;
}



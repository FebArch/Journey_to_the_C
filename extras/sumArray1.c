#include <stdio.h>

int sum(int (*arr)[4], int rows);

int main(){
    int arr[4][4] = {
        {1,2,3,5},   // 11
        {0,2,2,1},  // 5
        {1,9,0,1},  // 11
        {6,4,5,8}  // 20
    };  // 47
    int result = sum(&arr[0], 4);
    printf("Sum of all elements in 4x4 matrix is %d\n", result);
    return 0;
}

int sum(int (*arr)[4], int rows){
    int sum=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += *(*(arr+i) + j);
        }
        
    }
    return sum;
}

#include <stdio.h>

void setTwoDArray(int* arr[][5], int row, int col);

int main(){
    int arr[4][5];

    setTwoDArray(arr, 4, 5);  // arr decays to int (*)[5]; 
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void setTwoDArray(int* arr[][5], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 4*(j+i+1);
        }
        
    }
    
}
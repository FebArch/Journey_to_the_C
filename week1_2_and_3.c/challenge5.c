#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayMatrix(int row, int col, float mtrx[row][col]);

int main(){
    int row=12, col=12;
    float m[row][col];
    srand(time(NULL));

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            m[r][c] = (float) rand() / RAND_MAX ;
        }
    }

    displayMatrix(row, col, m);

    return 0;
}

void displayMatrix(int row, int col, float mtrx[row][col]){
    printf("\n");
    for (int r = 0; r < row; r++)
    {
        printf("[ ");
        for (int c = 0; c < col; c++)
        {
            printf("%.4f  ", mtrx[r][c]);
        }
        printf("\b]\n");
    }
    printf("\n");
}
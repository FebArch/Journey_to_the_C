#include <stdio.h>

int main(){
    int arr[3][3][3] = {
        { {1,2,3}, {4,5,6}, {7,8,9} },
        { {11,12,13}, {14,15,16}, {17,18,19} },
        { {21,22,23}, {24,25,26}, {27,28,29} },
    };
    int product=1, N=3;

    for (int i = N-1; i >= 0; i--)
    {
        for (int j = N-1; j >= 0; j--)
        {
            for (int k = N-1; k >= 0; k--){
                product *= arr[j][k][i];   //  Poor Spatial Locality
                product *= arr[i][j][k];   //  Good Spatial Locality
            }
        }
    }
    printf("Product of all elements in 3d Array is: %d\n", product);

}
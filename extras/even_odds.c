#include <stdio.h>

int main(){
    int even=0, odd=0;
    int arr[3][4] = {
        {2,3,4,5},    // 2
        {2,13,14,5},   //2
        {21,60,4,52},  //3
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(*(arr+i)+j) % 2 == 0)
            // if (arr[i][j] % 2 == 0)
            {
                // printf(">>%d\n", *((*arr+i)+j));
                // printf(">>%d\n", arr[i][j]);
                even++;
            }else{
                printf(">>%d\n", *((*arr+i)+j));

                odd++;
            }       
        }
    }
    
    printf("Number of evens in 3x4 matrix is %d\n", odd);

    return 0;
}
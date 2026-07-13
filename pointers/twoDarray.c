#include <stdio.h>

int main(){
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%p, ", &arr[i][j]);
        }
        printf("\n");
    }

    printf(">> %p\n", arr);
    printf(">> %p\n", (arr+1));
    
    return 0;
}
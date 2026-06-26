#include <stdio.h>

int main(){
    int arr[4]={2,5,11,8};

    int* p = arr;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("*********************\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("*********************\n");
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(arr+i));
    }
    printf("*********************\n");
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(p+i));
    }
    
    return 0;
}
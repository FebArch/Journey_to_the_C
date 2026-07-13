#include <stdio.h>

int main(){
    int sum=0;
    int arr[5] = {10,20,30,40,50};
    int *ptr= &arr[0];

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(ptr+i);
    }
    printf("Sum of elements in array is %d\n", sum);

    return 0;
}
#include <stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};

    for (int i = 1; i <= 5; i++)
    {
        printf("%d, ", *(arr+5-i));
    }
    

    return 0;
}
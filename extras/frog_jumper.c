#include <stdio.h>

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int* ptr = arr;
    
    printf("%d, ", *(ptr));
    ptr += 2;
    printf("%d, ", *(ptr));
    ptr+=3;
    printf("%d, ", *(ptr));
    return 0;
}
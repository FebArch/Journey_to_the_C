#include <stdio.h>

void displayArray(int *arr, int len);
void displayArrElementAddresses(int *arr, int len);

int main(){
    int arr[4] = {12,5,67,8};
    int* h_arr = malloc(4*sizeof(int));
    displayArray(arr, 4);
    displayArrElementAddresses(arr, 4);


    return 0;
}

void displayArray(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr+i));
    }
    printf("\b\b}\n");
}

void displayArrElementAddresses(int* arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%p, ", (arr+i));
    }
    printf("\b\b}\n");
}
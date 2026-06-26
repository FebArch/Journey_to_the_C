#include <stdio.h>
#include <stdlib.h>

void displayArray(int *arr, int len);
void displayArrElementAddresses(int *arr, int len);

int* mulTable(int m);

int main(){
    int arr[4] = {12,5,67,8};
    int* h_arr = malloc(4*sizeof(int));
    // displayArray(arr, 4);
    
    // displayArrElementAddresses(arr, 4);
    // displayArrElementAddresses(h_arr, 4);

    int *h_table = mulTable(2);
    displayArray(h_table, 10);

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

int* mulTable(int m){
    int* table = malloc(10*sizeof(int));

    for (int n = 0; n < 10; n++)
    {
        *(table+n) = m * (n+1);
        // printf("%d    *%p\n", *(table+n), (table+n));
    }
    return table;
}

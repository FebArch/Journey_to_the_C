#include <stdio.h>
#include <stdlib.h>

void displayArray(float* arr, int size);

int main(){
    FILE *fptr;
    int n;
    size_t byte_reader;

    fptr = fopen("model_loaderA4.bin", "rb");
    if (fptr == NULL)
    {
        printf("failed to open file in binary read mode\n");
        return 1;
    }

    byte_reader = fread(&n, sizeof(int), 1, fptr);
    if (byte_reader == 0)
    {
        printf("failed to read data from file\n");
        return 1;
    }

    printf("number of weights in file are: %d\n",n);

    float *arr = malloc(sizeof(float)*n);

    byte_reader = fread(arr, sizeof(float), n, fptr);
    if (byte_reader == 0)
    {
        printf("failed to read data from file\n");
        return 1;
    }
    
    displayArray(arr, n);

    free(arr);
    fclose(fptr);
    return 0;
}

void displayArray(float* arr, int size){
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%.4f, ", arr[i]);
    }
    printf("\b\b}\n");
}


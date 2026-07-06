// Successfull 10/10 program

#include <stdio.h>
#include <stdlib.h>

void storeWeights(unsigned char* arr);
void storeBias(unsigned char* arr);

int main(){
    unsigned char *arr = malloc(32);
    if (arr == NULL)
    {
        printf("Error allocation of heap memory!");
        return 1;
    }

    float *weights = (float *) arr;
    storeWeights(arr);

    int *bias = (int *) (arr+16);
    storeBias(arr+16);

    for (int i = 0; i < 4; i++)
    {
        printf("%.4f, ", weights[i]);
    }
    printf("\n");
    for (int j = 0; j < 4; j++)
    {
        printf("%d, ", bias[j]);
    }
    
    free(arr);
    return 0;
}

void storeWeights(unsigned char* arr){
    float* fptr = arr;
    fptr[0] = 3.145;
    fptr[1] = 4.145;
    fptr[2] = 56.145;
    fptr[3] = 99.145;
}

void storeBias(unsigned char* arr){
    int* iptr = arr;
    iptr[0] = 91;
    iptr[1] = 21;
    iptr[2] = 41;
    iptr[3] = 99;
}
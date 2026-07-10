#include <stdio.h>
#include <stdlib.h>

void storeWeights(unsigned char* farr, int len);
void showAddesses(unsigned char *arr, int len);
void storeBias(unsigned char *iarr, int len);
// void storeBias(int* iptr);

int main(){
    unsigned char *arr = malloc(32);
    
    float *weight = (float *)arr;
    int *bias = (int *) (arr+16);

    storeWeights(arr, 16);
    storeBias((arr+16), 16);

    for (int i = 0; i < 4; i++)
    {
        // printf("%f, ", (float) *(arr+i));
        // printf("%f, ", *weight);
        // printf(">%f, ", *(weight+i));
        printf(">> %f, ", weight[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf(">>%d, ", bias[i]);
    }
    

    // printf(">>> %zu, \n", sizeof(arr));
    // printf(">>> %zu, \n", sizeof(*arr));

    // storeBias(arr);

    return 0;
}

void showAddesses(unsigned char *arr, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%p, ", (arr+i));
        
    }
}

void storeWeights(unsigned char* farr, int len){
    float *weight = (float*) farr;
    weight[0] = 3.14;
    weight[1] = 4.14;
    weight[2] = 5.14;
    weight[3] = 31.14;
}

void storeBias(unsigned char *iarr, int len){
    int *iptr = (int *) iarr;
    iptr[0] = 44;
    iptr[1] = 45;
    iptr[2] = 94;
    iptr[3] = 14;
}

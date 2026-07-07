#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randFloats(float *arr, int len);

int main(){
    float* arr = malloc(32*sizeof(int));
    // unsigned char *arr = malloc(32);
    // unsigned char* arr = malloc(32*sizeof(unsigned char));

    randFloats(arr, 16);

    printf("\n\n*************************\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.4f, ", arr[i]);
    }
    

    return 0;
}

void randFloats(float *arr, int len){
    srand(time(NULL));
    float val;
    for (int i = 0; i < sizeof(float); i++)
    {
        val = (float) rand()/RAND_MAX * 100;
        printf("%f, ", val);
        *(arr+i) = (float)val;
        // *(arr+i) = val;
        // for (int j = 0; j < sizeof(val); j++)
        // {
        //     *(arr+j) = (float)val;
        // }
          
    }    
}
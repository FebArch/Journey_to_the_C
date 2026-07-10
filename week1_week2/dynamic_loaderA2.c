#include <stdio.h>
#include <stdlib.h>

void setArr(unsigned char *arr, int n);

int main(){
    int N=5;
    FILE *fptr;
    size_t bytes_written;
    
    unsigned char* arr = malloc(24);
    if (arr == NULL)
    {
        printf("Failed to allocate heap memory!");
        return 1;
    }
    // printf("sizeof arr is %zu\n", sizeof(*arr));

    setArr(arr, N);

    int* j = (int*) (arr);
    float* weights = (float*) (arr+4);

    // for (int i = 0; i < 24; i+=4)
    for (int i = 0; i < N; i++)
    {
        if (i==0)
        {
            printf(">%d, ", j[i]);
            // printf(">%d, ", *(int*)(arr+i));
            continue;
        }
        
        printf(">%f, ", weights[i]);
        // printf(">%f, ", *(float*)(arr+i));
    }
    
    fptr = fopen("model_loaderA2.bin", "wb");
    if (fptr==NULL)
    {
        printf("Failed to write mode the model loader bin file!");
        return 1;
    }
    
    bytes_written = fwrite(arr, sizeof(float), N+1, fptr);
    if (bytes_written==0)
    {
        printf("failed to write the bin file");
    }

    fclose(fptr);


    free(arr);
    return 0;
}

void setArr(unsigned char *arr, int n){
    int* N = (int*) arr;
    float* weight = (float*) (arr+4);

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            N[i] = n;
            // printf("%d, ", N[i]);
            // continue;
        }
        weight[i] = (i+1) + (0.1*(i+1));
        // weight[i] = i + (0.1*i);
        // printf("%f, ", weight[i]);
    }
    
}
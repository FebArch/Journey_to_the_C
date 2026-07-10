#include <stdio.h>
#include <stdlib.h>

void setArr(float* arr, int len);

int main(){
    int N = 5;
    float arr[N];
    FILE *fptr;
    size_t bytes_written;

    setArr(arr, N);

    for (int i = 0; i < 6; i++)
    {
        printf("%f, ", (float) arr[i]);
    }    

    fptr = fopen("model_loaderA1.bin", "wb");
    if (fptr == NULL)
    {
        printf("Failed to write model_loader file!");
        return 1;
    }
    
    bytes_written = fwrite(arr, sizeof(float), (N+1), fptr);
    // if all bytes are written the model_loader.bin file will be of 24 bytes total
    if (bytes_written==0)
    {
        printf("failed to write to file!");
    }
    
    fclose(fptr);
    return 0;
}

void setArr(float* arr, int len){
    for (int i = 0; i < (len+1); i++)
    {
        if (i==0)
        {
            *(arr) = len;
            continue;
        }
        
        *(arr+i) = i + (0.1*i);
    }
    
}
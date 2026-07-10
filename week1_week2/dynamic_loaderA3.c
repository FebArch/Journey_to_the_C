#include <stdio.h>
#include <stdlib.h>

void setArr(unsigned char *arr, int len);

int main()
{
    int N = 5;
    FILE *fptr;
    size_t bytes_written;

    unsigned char *arr = malloc(24);
    if (arr == NULL)
    {
        printf("failed to assigned the heap memory!");
    }

    setArr(arr, N);

    int *len = (int *)arr;
    float *weights = (float *)(arr + 4);

    printf("%d\n ", *len); // or simply len[0];
    for (int i = 0; i < N; i++)
    {
        printf("%f, ", weights[i]);
    }

    fptr = fopen("model_loaderA3.bin", "wb");
    if (fptr == NULL)
    {
        printf("failed to open file in write binary mode!");
        return 1;
    }

    // while ((bytes_written = fwrite(arr, sizeof(unsigned char), 24, fptr)) > 0)
    fwrite(arr, sizeof(unsigned char), 24, fptr);
    fclose(fptr);

    return 0;
}

void setArr(unsigned char *arr, int len)
{
    int *n = (int *)arr;
    float *weight = (float *)(arr + 4);

    n[0] = len;
    for (int i = 1; i < (len + 1); i++)
    {
        // printf("--%f\n", i+(0.1*i));
        weight[i - 1] = i + (0.1 * i);
    }
}
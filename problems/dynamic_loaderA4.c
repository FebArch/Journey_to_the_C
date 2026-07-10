#include <stdio.h>

int main(){
    int N=5;
    float weights[5] = {1.1, 2.2, 3.3, 4.4, 8.5};
    size_t bytes_written;

    FILE *fptr = fopen("model_loaderA4.bin", "wb");

    bytes_written = fwrite(&N, sizeof(int), 1, fptr);
    if (bytes_written == 0)
    {
        printf("failed to write integer in bin file!");
        return 1;
    }

    bytes_written = fwrite(weights, sizeof(float), 5, fptr);
    if (bytes_written == 0)
    {
        printf("failed to write weights in bin file!");
        return 1;
    }

    fclose(fptr);
    return 0;
}
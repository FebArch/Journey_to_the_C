#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char* dirt = malloc(12);
    
    float* decimals = (float*) dirt;
    int* whole_number = (int*) (dirt+8);
    
    decimals[0] = 3.14;
    decimals[1] = 9.99;

    whole_number[0] = 42;

    // printf("%f, ", *(float *)dirt);
    printf("%f, ", decimals[0]);
    // dirt+=4;
    // printf("%f, ", *(float *)(dirt+4));
    printf("%f, ", decimals[1]);
    // dirt+=4;
    // printf("%d", *(int *)(dirt+8));
    printf("%d, ", whole_number[0]);

    free(dirt);
    return 0;
}
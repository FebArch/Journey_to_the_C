#include <stdio.h>

int main(){
    int secret = 19088743;
    // printf(">>%p,\n", &secret);
    unsigned char *c = (unsigned char*) &secret;
    // printf(">>%p,\n", c);

    for (int i = 0; i < 4; i++)  // 4 becoz int is of 4 bytes only!
    {
        printf("%02x", *(c+i));
        // printf("%d\n", (int) *(c+i));
    }

    // printf("\n>%d\n", *(int *)c);    
    // printf(">%p\n", (int *)c);    
    return 0;
}
#include <stdio.h>

int main(){
    unsigned char c[12];
    size_t bytes_read;
    // int c;

    // struct ModelConfig v1={
    //     .magic_number = 42,
    //     .version=1,
    //     .vocab_size=32000
    // };

    FILE *fp = fopen("config.bin", "rb");

    if (fp == NULL)
    {
        printf("Failed to open the file in read binay mode!");
        return 1;
    }
    
    while ((bytes_read = fread(c, sizeof(unsigned char), 4, fp)) > 0)
    {
        // printf(">> %zu\n", bytes_read);
        for (int i = 0; i < bytes_read; i++)
        {
            printf("%02x, ", c[i]);
        }
        printf("\n");
    }
    
    
    fclose(fp);
    return 0;
}
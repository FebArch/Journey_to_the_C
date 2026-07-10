#include <stdio.h>

int main(){
    FILE *fp;
    unsigned char data[4] ={0};
    size_t bytes_read;
    int offset=0;

    fp = fopen("config1.bin", "rb");
    if (fp == NULL)
    {
        printf("failed to read the file!");
    }
    
    printf("Offset   || Bytes\n");
    printf("------------------------\n");
    while ((bytes_read = fread(data, sizeof(unsigned char), 4, fp)) > 0)
    {
        printf("%08d || ", offset);
        for (int i = 0; i < bytes_read; i++)
        {
            printf("%02x ", data[i]);
        }
        printf("\n");
        offset += bytes_read;
    }

    fclose(fp);
    return 0;
}
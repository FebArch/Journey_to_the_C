#include <stdio.h>

int main(){
    FILE *fp;
    unsigned char c;

    fp = fopen("binaryData.bin", "rb");
    int val = fread(&c, sizeof(char), 1, fp);
    while (val != 0)
    {
        printf("%d\n", c);
        val = fread(&c, sizeof(char), 1, fp);
    }
    
    fclose(fp);
    return 0;
}
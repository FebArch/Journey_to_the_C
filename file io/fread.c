#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("binaryOutput.bin", "rb");
    char c;

    while ((fread(&c, sizeof(char), 1, fp)) > 0)
    {
        printf("%c\n", c);
    }
    

    fclose(fp);
    return 0;
}
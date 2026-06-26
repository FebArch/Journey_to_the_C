#include <stdio.h>

int main(){
    FILE *fp;
    unsigned char data[6] = {1,28,3,4,7,5};

    fp = fopen("binaryData.bin", "wb");
    fwrite(data, sizeof(char), 6, fp);
    fclose(fp);
    return 0;
}
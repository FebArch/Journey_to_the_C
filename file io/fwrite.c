#include <stdio.h>

int main(){
    unsigned char bytes[6] = {4, 66, 78, 25, 34, 56};
    FILE *fp;
    
    fp = fopen("binaryOutput.bin", "wb");
    // In the call to fwrite, the arguments are:
    //
    // * Pointer to data to write
    // * Size of each "piece" of data
    // * Count of each "piece" of data
    // * FILE*
    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);       
    return 0;
}
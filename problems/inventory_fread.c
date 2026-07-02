#include <stdio.h>

int main(){
    int item;
    FILE *fp;
    // size_t data_readed;

    fp = fopen("inventory.bin", "rb");
    
    while (fread(&item, sizeof(int), 1, fp) > 0)
    {
        printf("%d  |  %02x\n", item, item);
    }


    fclose(fp);
    return 0;
}
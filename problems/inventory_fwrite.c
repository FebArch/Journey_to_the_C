#include <stdio.h>

int main(){
    int inventory[5] = {10, 20, 30, 40, 50};
    FILE *fp;
    size_t written;

    fp = fopen("inventory.bin", "wb");

    if (fp == NULL)
    {
        printf("Failed to write inventory file!");
    }
    

    written = fwrite(inventory, sizeof(int), 5, fp);

    if (written>0)
    {
        printf("Inventory filled!");
    }else{
        printf("Inventory is empty!");
    }
    
    fclose(fp);
    return 0;
}
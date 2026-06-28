#include <stdio.h>

struct ModelConfig{
    int magic_number;
    char version;
    int vocab_size;
};

int main(){
    FILE *fp;

    struct ModelConfig v1={
        .magic_number = 42,
        .version=1,
        .vocab_size=32000
    };

    struct ModelConfig *ptr1 = &v1;
    
    struct ModelConfig v2;
    struct ModelConfig *ptr2 = &v2;

    // values are stored in contiguous block and not randomnly arranged
    printf("- %p\n", &v1.magic_number);
    printf("- %p\n", &v1.version);
    printf("- %p\n", &v1.vocab_size);

    printf("%p\n", ptr1);
    printf("%p\n", (ptr1+1));
    printf("%p\n", (ptr1+2));

    printf("size of struct ModelConfig is: %zu\n", sizeof(struct ModelConfig));

    fp = fopen("config.bin", "wb");
    if (fp==NULL)
    {
        printf("Failed to open the file in write binary mode!");
        return 1;
    }
    
    // fwrite(ptr1, sizeof(struct ModelConfig), 1, fp);

    size_t written = fwrite(&v1, sizeof(struct ModelConfig), 1, fp);
    // the 4th argument of write function is returned

    /*
    if writing an array of 50 AI weights at once:
fwrite(weights_array, sizeof(float), 50, fp);
If your hard drive ran out of space exactly halfway through, fwrite would return 25
    */

    if (written)
    {
        printf("Data dumped into config file successfully!");
    }else{
        printf("Data failed to dumped into config file!");
    }
    

    fclose(fp);
    return 0;
}


    // fread(ptr2, sizeof(struct ModelConfig), 1, fp);
    // printf(">>>> %d\n", ptr2->magic_number);
    // printf(">>>> %d\n", ptr2->version);
    // printf(">>>> %d\n", ptr2->vocab_size);
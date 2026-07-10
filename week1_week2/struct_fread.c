#include <Stdio.h>

struct ModelConfig{
    int magic_number;
    char version;
    int vocab_size;
};

int main(){
    struct ModelConfig myModel;
    // struct ModelConfig *ptr;

    FILE *fp = fopen("config.bin", "rb");

    fread(&myModel, sizeof(struct ModelConfig), 1, fp);

    printf("%d\n", myModel.magic_number);
    printf("%d\n", myModel.version);
    printf("%d\n", myModel.vocab_size);

    fclose(fp);
    return 0;
}
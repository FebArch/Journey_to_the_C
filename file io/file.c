#include <stdio.h>

int main(){
    FILE *fp;

    // fp = fopen("hello.txt", "r");
    // int c = fgetc(fp);
    // printf("%c\n", c);
    // fclose(fp);

    fp = fopen("hello.txt", "r");

    int c;

    do
    {
        c = fgetc(fp);
        printf("%c", c);
    }while(c != EOF);
    fclose(fp);

    return 0;
}
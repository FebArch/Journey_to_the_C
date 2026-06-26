#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("hello.txt", "r");
    int v = fgetc(fp);
    // printf("%c\n", fgetc(fp));
    while (v != EOF)
    {
        printf("%c", v);
        v = fgetc(fp);
    }
    
    fclose(fp);
    return 0;
}
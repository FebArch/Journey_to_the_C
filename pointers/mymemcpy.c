#include <stdio.h>

void mymemcopy(void *dp, void *sp, int bytesize){
    char *dest=dp, *source=sp;
    for (int i = 0; i < bytesize; i++)
    {
        *(dest+i) = *(source+i);
    }
}

int main(){
    // char *s1 = "hello world!";
    // char dest[100];
    int s1[3] = {11,22,44};
    int dest[3];

    // printf("%s\n", s1);  // prints hello world!

    printf("%s\n", dest); // prints garbage values;
    mymemcopy(dest, s1, 13);
    printf("%s\n", dest); // prints garbage values;

    return 0;
}
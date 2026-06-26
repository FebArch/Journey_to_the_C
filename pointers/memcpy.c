#include <stdio.h>
#include <string.h>

int main(){
    char *s = "hello";
    void *p = s;
    char str[100];

    // printf("%s\n",str);  // prints garbage values
    memcpy(str, p, 6);
    printf("%s\n",str);
    // printf("%p\n",p);
    // printf("%c\n",*s);
    // printf("%s\n",*p);  // cannot dereference the void pointer
    return 0;
}
#include <stdio.h>

int myStrlen(char *str){
    char *p = str;

    while (*p != '\0')
    {
        printf(">>Address of p: %d\n", p);
        p++;
    }
    return (p-str);
}

int main(){
    char *s = "hello, world!";
    printf("%s\n",s);

    printf("length = %d\n", myStrlen(s));
    return 0;
}

// 4214917
// 4214904
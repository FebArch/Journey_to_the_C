#include <stdio.h>

int strlen(char *arr);

int main(){
    char str[] = "Hello World, io";
    
    int length = strlen(str);
    printf("Length of the string is: %d\n", length);

    return 0;
}


int strlen(char *arr){
    int l=0, i=0;
    while (*(arr+i) != '\0')
    {
        l++;
        i++;
    }
    return l;
}
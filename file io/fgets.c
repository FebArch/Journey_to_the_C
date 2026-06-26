#include <stdio.h>

int main(){
    int linecount=0;
    char s[1024];
    FILE *fp;
    
    fp = fopen("multilinefile.txt", "r");
    char *str = fgets(s, sizeof s, fp);  // fgets scoops up the first line of the Bruce Lee quote ("A wise man can learn more from\n") and drops it into s.

    while (str != NULL)
    {
        printf("%d: %s", ++linecount, str);
        str = fgets(s, sizeof s, fp);
    }
    // printf("%p\n", s);
    // printf("%p\n", str);
    // do
    // {
    //     str = fgets(s, sizeof s, fp);
    //     printf("%d: %s", ++linecount, str);
    // } while (str != NULL);
    
    fclose(fp);

    return 0;
}
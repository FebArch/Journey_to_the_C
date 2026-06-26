#include <stdio.h>

int main(){
    char s[1024];
    FILE *fp;
    fp = fopen("multilinefile.txt", "r");
    int linecount=0;
    char *str = fgets(s, sizeof s, fp);
    
    while (str!=NULL)
    {
        printf("%d: %s\n", ++linecount, str);
        str = fgets(s, sizeof s, fp);
    }
    
    fclose(fp);
    return 0;
}
#include <Stdio.h>

int main(){
    FILE *fp;
    int x = 9, y=1;
    int a = 88;
    printf("a value is: %d", a);

    fp = fopen("output1.txt", "w");
    // fp = stdout;
    
    fputc('B', fp);
    fputc('\n', fp);
    fputs("Joker is the main Villain\n", fp);

    fprintf(fp, "New Coordinates are (x,y) = (%d,%d)", x,y);

    fclose(fp);
    return 0;
}
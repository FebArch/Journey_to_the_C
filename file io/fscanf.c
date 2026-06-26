#include <stdio.h>

int main(){
    char name[1024];
    float mass;
    int length;

    FILE *fp;
    fp = fopen("whales.txt", "r");

    int vals = fscanf(fp, "%s %f %d", name, &mass, &length);

    while (vals != EOF)
    {
        printf("%s whale, %.1f tonnes, %d meters\n", name, mass, length);
        vals = fscanf(fp, "%s %f %d", name, &mass, &length);
    }
    

    fclose(fp);

    return 0;
}
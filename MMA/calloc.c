#include <stdio.h>
#include <stdlib.h>

void* heapArrayDeclaration(int bytes);
void heapArrayInitialization(float *ptr, int len);
void displayHeapArray(float* arr, int len);

int main(){
    int n=5;
    float *h_arr = heapArrayDeclaration(n*sizeof(float));
    heapArrayInitialization(h_arr, n);
    displayHeapArray(h_arr, n);
    return 0;
}

void* heapArrayDeclaration(int bytes){
    return malloc(bytes);
}


void heapArrayInitialization(float* ptr, int len){
    int i=0;
    char s[100];
    float num;
    FILE *fp;
    fp = fopen("magicnumbers.txt", "r");
    while(fscanf(fp, "%s %f", s, &num) != EOF && i<len){ // EOF or -1
        *ptr = num;
        ptr++;
        i++;
    }
    fclose(fp);
}


void displayHeapArray(float* arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%.4f, ", *(arr+i));
    }
    printf("\b\b}\n");
}




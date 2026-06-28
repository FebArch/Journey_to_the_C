#include <stdio.h>
#include <stdlib.h>

void* heapArrayDeclaration(int size, int bytes);
void heapArrayInitialization(float *ptr, int len);
void displayHeapArray(float* arr, int len);
void displayHeapArrayAddresses(float* arr, int len);

int main(){
    int n=5;
    float *h_arr = heapArrayDeclaration(sizeof(float), n);
    // heapArrayInitialization(h_arr, n);
    displayHeapArray(h_arr, n);
    // displayHeapArrayAddresses(h_arr, n);
    return 0;
}

void* heapArrayDeclaration(int size, int bytes){
    return calloc(size, bytes);
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
        printf("%d, ", *(arr+i));
    }
    printf("\b\b}\n");
}


void displayHeapArrayAddresses(float* arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%p, ", (arr+i));
    }
    printf("\b\b}\n");
}




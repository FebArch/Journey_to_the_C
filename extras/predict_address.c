#include <stdio.h>

int main(){
    int arr[5];

    printf("%p\n", arr);  // 0061FF0C
    printf("%p\n", arr+1);  // 0061FF10
    printf("%p\n", &arr);  // 0061FF0Cv  /// array pointer! points to whole array and not a single element
    printf("%p\n", &arr + 1);  // 0061FF0C
    return 0;
}
#include <stdio.h>

int main(){
    int arr[3][4] = {
        {11,22,33,44},
        {91,92,93,94},
        {10,20,30,40}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("%d, ", *(arr[i] + j));
            // arr[i] = *(arr+i)
            printf("%d, ", *(*(arr+i) + j));
            // for i=0 --> {11,22,33,44} j=0 i.e. it will arr[i] i.e. equivalent just an arr variable hence it points to 1st element and we use * to fetch value from that particular address
        }
        printf("\n");
    }
    

    return 0;
}
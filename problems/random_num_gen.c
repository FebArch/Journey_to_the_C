#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number
    int value = rand() % 100 +1;
    //  float value = (float)rand() / RAND_MAX; (0-1)
    // float value = min + (float)rand() / RAND_MAX * (max - min); (MIN-MAX)
    // float value = (float)rand() / RAND_MAX * 100; (0-100)

    printf("The Random Value is: %d\n", value);

    return 0;
}
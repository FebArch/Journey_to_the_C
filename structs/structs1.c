#include <stdio.h>

struct car
{
    char *name;
    int speed;
    float price;
};


int main(){
    struct car verna;
    verna.name = "Hyundai Verna";
    verna.speed = 180;
    verna.price = 100;

    struct car volkswagen = {"Volkswagen Polo", 140, 60};

    struct car chevy;

    // chevy = {.speed=200, .name="Chevrolet Cruze LTZ" }

    printf("Car Name: %s\n", volkswagen.name);
    printf("Car Speed: %d\n", volkswagen.speed);
    printf("Car Price: %.3f\n", volkswagen.price);

    printf("Size of Struct car is %zu\n", sizeof(verna));
    return 0;
}
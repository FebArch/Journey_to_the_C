#include <stdio.h>

struct car{
    char *name;
    char *company;
    int topspeed;
};

void setCompanyName(struct car *s, char *name);

int main(){
    struct car landcruiser = {.name="Land Cruiser", .topspeed=240};
    printf("car name = %s\n", landcruiser.name);
    printf("manufacturer = %s\n", landcruiser.company);
    printf("top speed = %d\n", landcruiser.topspeed);
    
    setCompanyName(&landcruiser, "Toyota");
    
    printf(">> manufacturer = %s\n", landcruiser.company);
    return 0;
}

void setCompanyName(struct car *s, char *name){
    // (*s).company = name;
    s->company = name;
    return;
}
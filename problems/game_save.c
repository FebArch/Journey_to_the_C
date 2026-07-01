#include <stdio.h>

#pragma pack(1)

struct PlayerStat{
    int HP;
    char rank;
    float x_position;
};

int main(){
    struct PlayerStat hinaku = {0};
    size_t written;
    
    hinaku.HP = 65;
    hinaku.rank = 'S';
    hinaku.x_position = 23.5;


    printf("HP: %d\n", hinaku.HP);
    printf("Rank: %c\n", hinaku.rank);
    printf("X-position: %d\n", hinaku.x_position);

    FILE *fp = fopen("savegame.bin", "wb");
    written = fwrite(&hinaku, sizeof(struct PlayerStat), 1, fp);

    if (written > 0)
    {
        printf("Game saved successfully!");
    }else{
        printf("failed to save to game");
    }
    

    fclose(fp);
    
    return 0;
}
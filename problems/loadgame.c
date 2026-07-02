#include <stdio.h>

#pragma pack(1)

struct PlayerStat{
    int HP;
    char rank;
    float x_position;
};

int main(){
    struct PlayerStat loaded_player;
    FILE *fp;
    size_t items_read;

    printf("sizeof of player stat is %zu\n", sizeof(struct PlayerStat));

    fp = fopen("savegame.bin", "rb");

    if (fp == NULL)
    {
        printf("file failed to read in rb mode!\n");
        return 1;
    }
    

    items_read = fread(&loaded_player, sizeof(struct PlayerStat), 1, fp);
    if (items_read == 1)
    {
        printf("Player HP: %d\n", loaded_player.HP);
        printf("Player Rank: %c\n", loaded_player.rank);
        printf("Player x_positon: %.4f\n", loaded_player.x_position);
    }else{
        printf("Failed to load the game!\n");
    }
    
    fclose(fp);
    return 0;
}
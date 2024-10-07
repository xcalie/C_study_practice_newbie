#ifndef GANE_FUNCTIONS_H
#define GAME_FUNCITONS_H

#include "game_structs.h"

// 函数原型
void create_player(Player* player, const char* name, CharacterClass char_class);

Enemy generateEnemy(EnemyType type, int32_t level);

void battle(Player* player, Enemy* enemy);

void print_player_info(const Player* player);

void print_enemy_info(const Enemy* enemy);

void init(void);



#endif // !GAME_FUNCTIONS_H

#ifndef GAME_STRUCTS_H
#define GAME_STRUCTS_H

#include "game_types.h"
#include "game_abilities.h"

typedef struct {
	char name[50];
	CharacterClass char_class;
	Ability ability;
	int32_t level;
	int32_t health;
	int32_t exp;
} Player;


typedef struct {
	EnemyType type;
	Ability ability;
	int32_t level;
	int32_t health;
} Enemy;


typedef struct {
	char name[50];
	ItemType type;
	int32_t power;
} Item;


#endif // !GAME_STRUCTS_H

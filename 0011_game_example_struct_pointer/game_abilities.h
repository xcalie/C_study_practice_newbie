#ifndef GAME_ABILITIES_H
#define GAME_ABILITIES_H

#include<stdint.h>

typedef union {
	int32_t strength;				// 用于战士的力量
	float mana;					// 用于魔法的魔法值
	int32_t stealth;				// 用于流氓的隐藏能力
} Ability;

#endif // !GAME_ABILITIES_H

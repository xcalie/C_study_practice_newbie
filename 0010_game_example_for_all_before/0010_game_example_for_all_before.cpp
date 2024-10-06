#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>

#define u32 uint32_t
#define d32 int32_t

#define EXP_PER_LEVEL 100			// 升级所需经验值
#define MAX_LEVEL 10				// 最大等级数量
#define HINTS_COUNT 10				// 宝藏提示数量


void increase_exp(u32* exp, u32 amount);
bool check_level_up(u32* exp, u32* level);
const char* get_treasure_hint(u32 level);

int main(void)
{
	u32 player_exp = 0;
	u32 player_level = 1;

	increase_exp(&player_exp, 50);			// 解密获得经验值

	increase_exp(&player_exp, 75);			// 战斗获得经验值

	if (check_level_up(&player_exp, &player_level)) {
		printf("%s\n", get_treasure_hint(player_level));
	}
	else
	{
		printf("还需要更多的经验才能升级");
	}

	return 0;
}


void increase_exp(u32* exp, u32 amount)
{
	*exp += amount;
}

bool check_level_up(u32* exp, u32* level)
{
	while (*exp >= EXP_PER_LEVEL && *level < MAX_LEVEL)
	{
		*exp -= EXP_PER_LEVEL;
		(*level)++;
		printf("恭喜你升级到了%" PRIu32 "级！\n", *level);
		return true;
	}
	return false;
}

const char* get_treasure_hint(u32 level)
{
	static const char* hints[HINTS_COUNT] = {
		"提示 1：宝藏藏匿在古老的瀑布之后，请返回修给点",
		"提示 2：寻找被遗忘的石中剑..."
		// .......
	};

	if (level > 0 && (size_t)level <= HINTS_COUNT)
	{
		return hints[(size_t)level - 1];
	}

	return "未知提示：请确保你在有效的等级范围之内才能解锁宝藏提示";
}
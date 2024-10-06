#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>
#include<stdlib.h>
#include<limits.h>

#define u32 uint32_t
#define d32 int32_t

#define MAX_ACHIEVEMENTS 10

const char* achievements[MAX_ACHIEVEMENTS];

size_t achievements_count = 0;

void add_achievement(const char* new_achievement);
// 设置为 const 防止意外修改
// 只读

void print_achievements(void);

int main(void)
{
	add_achievement("完成第一个挑战奖杯");
	add_achievement("找到了所以的隐藏宝箱");

	print_achievements();

	return 0;
}


void add_achievement(const char* new_achievement)
{
	if (achievements_count < MAX_ACHIEVEMENTS)
	{
		achievements[achievements_count++] = new_achievement;
		printf("添加成就：%s\n", new_achievement);
	}
	else
	{
		printf("成就数量已满，添加失败\n");
	}
}

void print_achievements(void)
{
	printf("玩家成就列表：\n");
	for (size_t i = 0; i < achievements_count; i++)
	{
		printf("%zu：%s\n", i + 1, achievements[i]);
	}
}
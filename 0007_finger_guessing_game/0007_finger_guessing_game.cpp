#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define u8 uint8_t
#define u32 uint32_t

#define ROCK 1
#define SCISSOR 2
#define PAPER 3

u8 win_result[PAPER][PAPER] = {
	{2, 1, 0},
	{0, 2, 1},
	{1, 0, 2}
};
/*
		电脑  石头  剪刀 布
	玩家

	石头
	剪刀
	布
*/

void print_introduce_of_game(void);
u8 get_player_choice(void);
u8 get_result_game(void);
void judge_win(u8 choice_player, u8 choice_computer);

int main(void)
{
	// 初始化随机数
	srand(time(NULL));

	print_introduce_of_game();
	judge_win(get_player_choice(), get_result_game());

	return 0;
}

void print_introduce_of_game(void)
{
	puts("1:石头 2:剪刀 3:布");
	puts("==================");
}

u8 get_player_choice(void)
{
	u8 choice ;
	while (true)
	{
		scanf_s("%" SCNu8 "", &choice);
		if (!choice || (choice >= ROCK && choice <= SCISSOR))
		{
			break;
		}
		else
		{
			puts("输入错误");
		}
	}
	return choice;
}

u8 get_result_game(void)
{
	return (rand() % 3) + 1;
}

void judge_win(u8 choice_player, u8 choice_computer)
{
	switch (win_result[choice_player][choice_computer]) {
	case 0:
		puts("输了");
		break;
	case 1:
		puts("赢了");
		break;
	case 2:
		puts("平局");
		break;
	default:
		break;
	}

	switch (choice_computer){
	case 1:
		puts("电脑出的是石头");
		break;
	case 2:
		puts("电脑出的是剪刀");
		break;
	case 3:
		puts("电脑出的是布");
		break;
	default:
		break;
	}
}
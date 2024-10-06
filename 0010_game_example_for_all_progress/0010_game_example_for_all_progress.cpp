#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>
#include<stdlib.h>

#define u32 uint32_t
#define d32 int32_t

void update_score(u32* score, u32 points);
u32* compare_score(u32* score1, u32* score2);
void double_score(u32* score);

int main(void)
{
	u32 player1_score = 100;
	u32 player2_score = 150;

	update_score(&player2_score, 50);

	u32* higher_score = compare_score(&player1_score, &player2_score);
	printf("分数跟高的是:%" PRIu32 "\n", *higher_score);

	double_score(&player2_score);

	return 0;
}


void update_score(u32* score, u32 points)
{
	*score += points;
	printf("当前分数%" PRIu32 "\n", *score);
}

u32* compare_score(u32* score1, u32* score2)
{
	return (*score1 > *score2) ? score1 : score2;
}

void double_score(u32* score)
{
	*score *= 2;
	printf("翻倍后的分数：%" PRId32 "\n", *score);
}
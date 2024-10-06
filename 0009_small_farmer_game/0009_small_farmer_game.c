#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

#define u32 uint32_t
#define d32 int32_t

#define ROWS 10			// 农场的行
#define COLS 10			// 农场的列
#define EMPTY 0			// 空地
#define PLANTED 1		// 已经种植(未成熟)
#define MATURED 2		// 成熟的作物
#define STONE 3


void print_farm(d32 farm[][COLS]);



int main(void)
{
	// c语言专属写法
	d32 farm[ROWS][COLS] = {
		[3][3] = STONE,
		[4][3] = STONE
	};
	// 下方由于再次初始化，该处无效
	srand((u32)time(NULL));

	for (d32 i = 0; i < ROWS; i++)
	{
		for (d32 j = 0; j < COLS; j++)
		{
			farm[i][j] = (rand() % 2 == 0) ? EMPTY : PLANTED;
		}
	}

	print_farm(farm);
	Sleep(1000);

	// 模拟过程

	for (d32 time = 0; time < 5; time++)
	{
		system("cls");
		
		for (d32 i = 0; i < ROWS; i++)
		{
			for (d32 j = 0; j < COLS; j++)
			{
				if (farm[i][j] == PLANTED)
				{
					// 假设每个时段都有30%的几率作物会成熟
					if (rand() % 10 < 3)
					{
						farm[i][j] = MATURED;
					}
				}
			}
		}
		print_farm(farm);
		Sleep(1000);
	}

	return 0;
}


void print_farm(d32 farm[][COLS])
{
	for (d32 i = 0; i < ROWS; i++)
	{
		for (d32 j = 0; j < COLS; j++)
		{
			switch (farm[i][j])
			{
			case EMPTY: printf(". "); break;		// 空地
			case PLANTED: printf("* "); break;		// 已种植
			case MATURED: printf("# "); break;		// 已成熟
			case STONE: printf("! "); break;		// 石头
			}
		}
		printf("\n");
	}
}
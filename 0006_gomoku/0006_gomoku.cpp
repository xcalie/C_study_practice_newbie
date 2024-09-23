#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#include<stdbool.h>
#include<stdlib.h>
#include<limits.h>


#define u32 uint32_t
#define u8 uint8_t
#define d8 int8_t

#define SIZE 15										// 确定大小


bool flag_win = false;

u8 chessboard[SIZE][SIZE] = { 0 };					// 储存棋盘

// 打印棋盘
void print_chessboard(void)	
{
	for (u8 line_x = 0; line_x < SIZE; line_x++)
	{
		printf("%2" PRIu8 " ", line_x + 1);
		for (u8 line_y = 0; line_y < SIZE; line_y++)
		{
			switch (chessboard[line_x][line_y]){
			case 1 : 
				printf("X");
				break;
			case -1 :
				printf("O");
				break;
			case 0 :
				printf(".");
				break;
			}

			printf("   ");
		}
		printf("\n\n");
	}

	//printf(" ");
	for (u8 line_y = 0; line_y < SIZE; line_y++)
	{
		printf("%4" PRIu8 "", line_y + 1);
	}
}


// 确定方向 x
d8 judge_direction_x(u8 direction_all)
{
	if ((direction_all == 1) || (direction_all == 4) || (direction_all == 7))
	{
		return -1;
	}
	if ((direction_all == 2) || (direction_all == 5) || (direction_all == 8))
	{
		return 0;
	}
	if ((direction_all == 3) || (direction_all == 6) || (direction_all == 9))
	{
		return 1;
	}

	return 0;
}
// 确定方向 y
d8 judge_direction_y(u8 direction_all)
{
	if ((direction_all == 1) || (direction_all == 2) || (direction_all == 3))
	{
		return -1;
	}
	if ((direction_all == 4) || (direction_all == 5) || (direction_all == 6))
	{
		return 0;
	}
	if ((direction_all == 7) || (direction_all == 8) || (direction_all == 9))
	{
		return 1;
	}

	return 0;
}


/*
	  1  2  3
	  4  z  6	前后探索，成5个退出
	  7  8  9

*/
d8 find_win_result(u8 x, u8 y, d8 flag, d8 number_connect, d8 direction)
{
	d8 move_x = judge_direction_x(direction);
	d8 move_y = judge_direction_y(direction);

	// 如果为入口 向各个方向扩展 获得最大连续数量
	if (direction == 5)
	{
		d8 result_1 = find_win_result(x + 1, y + 1, flag, 1, 9) + find_win_result(x - 1, y - 1, flag, 1, 1);
		d8 result_2 = find_win_result(x + 1, y, flag, 1, 6) + find_win_result(x - 1, y, flag, 1, 4);
		d8 result_3 = find_win_result(x, y + 1, flag, 1, 8) + find_win_result(x, y - 1, flag, 1, 2);
		d8 result_4 = find_win_result(x + 1, y - 1, flag, 1, 3) + find_win_result(x - 1, y + 1, flag, 1, 7);

		
	}

	if (chessboard[x + move_x][y + move_y] == flag)
	{

	}
}

int main(void)
{
	//测试打印棋盘
	//print_chessboard();
/*
	while (!flag_win)
	{

	};
*/

	return 0;
}
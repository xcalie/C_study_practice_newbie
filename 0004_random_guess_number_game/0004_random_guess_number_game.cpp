#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	uint32_t random_number;					// 随机数字
	uint32_t guess_number = 101;					// 猜测数字

	// 生成随机数
	srand(time(NULL));
	// 生成1~100的随机数
	random_number = rand() % 100 + 1;

	puts("猜数，范围在1~100以内");
	do {
		scanf_s(" %" PRIu32 "", &guess_number);
		
		// 猜数与目标数大小判断
		if (guess_number < random_number)
		{
			puts("猜数小于目标数字，请继续");
		}
		if (guess_number > random_number)
		{
			puts("猜数大于目标数字，请继续");
		}

	} while (guess_number != random_number);

	printf("恭喜，猜中了，数字为%" PRIu32 "", random_number);

	return 0;
}
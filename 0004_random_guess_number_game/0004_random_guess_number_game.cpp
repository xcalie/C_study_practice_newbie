#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	uint32_t random_number;					// 随机数字
	uint32_t guess_number = 101;				// 猜测数字
	int32_t status;
	char buffer[50];

	// 生成随机数
	srand(time(NULL));
	// 生成1~100的随机数
	random_number = rand() % 100 + 1;

	puts("猜数，范围在1~100以内");
	do {
		puts("请输入数字");

		fgets(buffer, sizeof(buffer), stdin);
		status = sscanf_s(buffer,"%d", &guess_number);

		/*
			sscanf_s 扫描字符串将其转换为对应类型赋值对应变量
			会产生返回值 1 为可以正常赋值 
						-1为不能正常赋值
		*/

		if (status != 1)
		{
			puts("输入无效");
			continue;
		}
		
		// 猜数与目标数大小判断
		if (guess_number < random_number)
		{
			puts("猜数小于目标数字，请继续");
		}
		else if (guess_number > random_number)
		{
			puts("猜数大于目标数字，请继续");
		}

	} while (guess_number != random_number);

	printf("恭喜，猜中了，数字为%" PRIu32 "\n", random_number);

	return 0;
}
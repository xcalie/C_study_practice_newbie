#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define u32 uint32_t
#define u64 uint64_t

int main(void)
{
	// 求和 输入q停止

	u32 sum = 0;
	char input[50];
	char* end;

	puts("输入一系列数字，按q结束输入，将计算其的和");

	while (true)
	{
		errno = 0;

		// scanf赋值,输入的地方给予number值
		scanf_s("%49s", &input, 50);
		
		// 字符串以 \0 结尾
		if (input[0] == 'q' && input[1] == '\0')
		{
			break;
		}

		u64 number = strtol(input, &end, 10);
		// 转换为数字 并返回，可以检查错误
		// ASCII '0' ~ '9'  48
		
		if (end == input || *end != '\0')
		{
			puts("无效输入，输入一个数字或者 q");
		}
		else if (errno == ERANGE || number < 0 || number > UINT32_MAX)
		{
			puts("超过范围，请输入在 uint32 范围内的数字");
		}
		else
		{
			sum += (u32)number;
		}
	}

	printf("对应数字求和为%" PRId32 "\n", sum);

	return 0;
}
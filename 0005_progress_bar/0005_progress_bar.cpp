#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<Windows.h>

#define u32 uint32_t

int main(void)
{
	const u32 TOTAL_STAPS = 50;
	
	puts("加载中中，请稍等");
	
	for (u32 i = 0; i <= TOTAL_STAPS; i++)
	{
		printf("\r[");

		// 打印进度条部分
		for (u32 j = 0; j < i; j++)
		{
			printf("#");
		}
		for (u32 j = i; j < TOTAL_STAPS; j++)
		{
			printf(" ");
		}

		printf("] %" PRIu32 "%%", (i * 100) / TOTAL_STAPS);

		fflush(stdout); // 确保即时显示
		Sleep(100);
	}

	puts("\n处理完成");

	return 0;
}
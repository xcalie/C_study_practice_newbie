#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#include<windows.h>
// Windows.h 中的Sleep函数可以实现阻塞导致程序延迟进行
// 从而实现延迟输出

int main(void)
{
	uint8_t status = 0;					// 标识红绿灯状态
	bool flag_of_tick = 1;				// 标识红绿灯开关

	// 红绿灯默认开启
	while (flag_of_tick)
	{
		switch (status)
		{
		case 0:
			puts("red");
			status++;
			Sleep(90e3);		// 90秒红灯
			break;
		case 1:
			puts("yellow");
			status++;
			Sleep(5e3);			// 5秒黄灯
			break;
		case 2:
			puts("green");
			status = 0;
			Sleep(60e3);		// 60秒绿灯
			break;
		}
	}

	return 0;
}
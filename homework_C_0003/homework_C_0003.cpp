#include<stdio.h>

int main(void)
{
	char c[5];						//创建字符数组
	
	for (int i = 0; i < 5; i++)
	{
		c[i] = getchar() + 4;		//用getchar获得字符
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%c", c[i]);	//打印
	}


	return 0;
}

/*实验报告

获得单个字符时可以使用getchar来获取
打印字符主要不能用字符串简单输出
否则容易出现\0被转换为烫烫烫烫烫

*/
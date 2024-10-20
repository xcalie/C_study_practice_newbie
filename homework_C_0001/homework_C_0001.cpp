#include<stdio.h>

int main(void)
{
	float tem;
	scanf_s("%f", &tem);					// 通过scanf输入float类型

	printf("c=%f", 5.0f * (tem - 32.0f) / 9.0f);		// 通过计算得出结果

	return 0;
}


/**实验报告
*
*该程序中要注意float类型的变量输入为%f
*并且在float变量计算之间常量
*带上f以标注float变量
*
*/
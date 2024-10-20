#include<stdio.h>

int main(void)
{
	int a, b;
	printf("input two number:");
	scanf_s("%d,%d", &a, &b);// 依次打印
	printf("两数之和=%d\n", a + b);
	printf("两数之积=%d\n", a * b);
	printf("两数之差=%d\n", a - b);
	printf("两数之商=%d\n", a / b);
	printf("两数之余=%d\n", a % b);

	return 0;
}

/*实验报告
* 
* 该程序中键入两个整形之后
* 再进行四则运算
* 这样打印结果的格式
* 
*/
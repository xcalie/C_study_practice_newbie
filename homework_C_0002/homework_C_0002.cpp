#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c;
	scanf_s("a=%lf,b=%lf,c=%lf", &a, &b, &c);			//读取识别特殊占位符号
	double p = (a + b + c) / 2;

	double ans = p*(p - a)*(p - b)*(p - c);

	printf("area=%lf", sqrt(ans));					// 开方来自于math.h

	return 0;
}

/*实验报告

该程序要重点主要输入时对应的格式
还有double对应%lf
以及开方库函数来自于math.h

*/
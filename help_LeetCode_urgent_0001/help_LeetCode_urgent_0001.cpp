#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define d32 int32_t
#define u32 uint32_t

bool tree[10000 + 5];
// 放在全局变量自动初始化为 0

int main(void)
{
	// 由于 10000*100 < 10**8 可以使用最暴力的方法
	d32 L, N;
	scanf_s("%" SCNd32 " %" SCNd32 "", &L, &N);
	for (d32 i = 1; i <= N; i++)
	{
		d32 start, end;
		scanf_s("%" SCNd32 " %" SCNd32 "", &start, &end);
		for (d32 j = start; j <= end; j++)
		{
			tree[j] = true;
		}
	}
	
	d32 ans = 0;
	for (d32 i = 0; i <= L; i++)
	{
		if (!tree[i])
		{
			ans++;
		}
	}

	printf("%" PRId32 "", ans);

	return 0;
}
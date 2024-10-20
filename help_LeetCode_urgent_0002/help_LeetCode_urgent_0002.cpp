#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int32_t numbers[30][30];

int main(void)
{
	int32_t n, m;
	scanf_s("%" SCNd32 " %" SCNd32 "", &n, &m);
	for (int32_t i = 0; i < n; i++)
	{
		for (int32_t j = 0; j < m; j++)
		{
			scanf_s(" %" SCNd32 "", &numbers[i][j]);
		}
	}

	int32_t x, y;
	scanf_s("%" SCNd32 " %" SCNd32 "", &x, &y);
	printf("%" PRId32 "", numbers[x - 1][y - 1]);

	return 0;
}
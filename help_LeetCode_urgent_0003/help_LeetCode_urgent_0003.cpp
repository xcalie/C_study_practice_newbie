#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t a, b;
	while (scanf_s("%" SCNd32 " %" SCNd32 "", &a,&b) != EOF)
	{	
		printf("%" PRId32 "\n", a + b);
	}

	return 0;
}
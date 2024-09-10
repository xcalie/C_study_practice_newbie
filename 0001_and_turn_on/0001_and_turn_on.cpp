#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

void print_into_binary(uint8_t print_status)
{
	if (print_status > 0)
	{
		print_into_binary(print_status >> 1);
	}
	printf("%" PRId8 "", print_status & 1);
}

uint8_t turn_off(uint8_t original_status, uint8_t address)
{
	// 将指定位置关闭（8位）
	uint8_t status = 1 << address;
	uint8_t middle_status = UINT8_MAX;
	status ^= middle_status;
	return status & original_status;
}

uint8_t turn_on(uint8_t original_status, uint8_t address)
{
	// 将指定位置关闭（8位)
	uint8_t status = 1 << address;
	return status | original_status;
}

int main(void)
{
	uint8_t start_status;
	printf("scanf 1st staus within 8types : ");
	scanf_s("%" PRIu8 "", &start_status);
	printf("\n");
	print_into_binary(start_status);
	
	printf("\nscanf number bigger than 8 to end this progress\n");
	printf("please scanf how to fix\n 1 : turn on\n 0 : turn off\n\n");

	uint8_t need = 0;
	while (need <= 1)
	{

		scanf_s("%" PRId8 "", &need);
		uint8_t number_to_fix;

		if (need == 0)
		{
			scanf_s("%" PRIu8 "", &number_to_fix);

			uint8_t middle_status = turn_off(start_status, number_to_fix);
			start_status = middle_status;
			print_into_binary(start_status);
			printf("\n\n");
		}
		else if (need == 1)
		{
			scanf_s("%" PRIu8 "", &number_to_fix);

			uint8_t middle_status = turn_on(start_status, number_to_fix);
			start_status = middle_status;
			print_into_binary(start_status);
			printf("\n\n");
			
		}

	}

	return 0;
}
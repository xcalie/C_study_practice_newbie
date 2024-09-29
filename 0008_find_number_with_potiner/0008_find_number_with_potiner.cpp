#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

#define flag 34

d32* find_pointer(d32* start, size_t length);

int main(void)
{
	d32 number[] = {
		13,344,66,2,5,34,556
	};

	size_t size = sizeof(number) / sizeof(number[0]);
	d32* ptr_start = &number[0];
	d32* ptr_end = &number[size - 1];

	printf("32 在第 %td 个", (find_pointer(ptr_start, size) - ptr_start)+1);

	return 0;
}

d32* find_pointer(d32* start, size_t length)
{
	for (d32* i = start; i <= start + length; i++)
	{
		if (*i == flag) {
			return (d32*)i;
		}
	}
	return (d32*)start;
}
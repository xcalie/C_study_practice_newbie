#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>



char str1[50];
char str2[50];

int main(void)
{
	puts("输入长段字符串");
	scanf_s("%s", str1, 50);

	puts("输入需求搜索的字符串");
	scanf_s("%s", str2, 50);
	
	size_t length = strlen(str2);
	int32_t found = 0;
	int32_t number = 0;
	char* ad;
	
	do{
		ad = strstr(str1 + found, str2);
		found = ad - str1 + length;

		if (found >= 0 && found <= 50)
		{
			printf("%" PRId32 " ", found);
			number++;
		}

	} while (ad != NULL);
	printf("\n找了共%" PRId32 "个", number);



	return 0;
}
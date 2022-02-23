#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int i=0, j=0, k=0,m=0;
	char c;
	printf("请输入一行字符:");
	/*scanf("%c", &c);*/
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')i++;
		else if (c == ' ')j++;
		else if (c >= '0'&&c <= '9')k++;
		else m++;
	}
	printf("英文字母:%d 空格:%d 数字:%d 其他:%d", i, j, k, m);
	return 0;
}
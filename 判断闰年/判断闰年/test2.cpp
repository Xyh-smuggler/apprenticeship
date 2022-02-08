#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	int y;
	printf("输入一个年份:");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		printf("%d是闰年", y);
	else
		printf("%d不是闰年",y);
	return 0;
}
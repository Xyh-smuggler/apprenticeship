#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	int y;
	printf("����һ�����:");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		printf("%d������", y);
	else
		printf("%d��������",y);
	return 0;
}
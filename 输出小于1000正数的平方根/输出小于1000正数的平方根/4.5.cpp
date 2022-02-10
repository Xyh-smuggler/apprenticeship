#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	double a,res;
	printf("输入一个小于1000的正数:");
	scanf("%lf", &a);
	if (a > 1000 || a <= 0)
	{
		printf("输入有误，重新输入:");
		scanf("%lf", &a);
	}
	printf("平方根:%3.0lf", sqrt(a));
	return 0;
}
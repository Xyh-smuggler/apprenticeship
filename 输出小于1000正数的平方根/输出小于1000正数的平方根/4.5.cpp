#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	double a,res;
	printf("����һ��С��1000������:");
	scanf("%lf", &a);
	if (a > 1000 || a <= 0)
	{
		printf("����������������:");
		scanf("%lf", &a);
	}
	printf("ƽ����:%3.0lf", sqrt(a));
	return 0;
}
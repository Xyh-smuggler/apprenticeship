#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	double a,x,y;
	printf("������a��ֵ��");
	scanf("%lf", &a);
	x = a / 2;
	y = (x + a / x) / 2;
	while (fabs(y-x)>=1e-5)
	{
		x = y;
		y = (x + a / x) / 2;
	}
	printf("%lf ��ƽ����Ϊ%f\n", a, y);
	return 0;
}
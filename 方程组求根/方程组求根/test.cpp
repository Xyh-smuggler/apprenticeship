#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	double a, b, c, disc, x1, x2, p, q;
	printf("����aƽ��x+bx+c=0��a b c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc = b*b - 4 * a*c;
	if (disc < 0)
	{
		printf("������ʵ��\n");
	}
	else
	{
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;
		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);
	}

	return 0;
}

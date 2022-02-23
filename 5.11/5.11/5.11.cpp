#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	double s=100, i, j=s/2;
	for (i = 2; i <= 10; i++)
	{
		s = s + j;
		j = j / 2;

	}
	printf("第十次共经过：%f\n", s);
	printf("第十次反弹高度：%f", j);
	return 0;
}
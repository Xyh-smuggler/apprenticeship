#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"


int main()
{
	double i, j=1, k=2,s=0,temp;
	for (i = 1; i <= 20; i++)
	{
		s = k / j + s;
		temp = k;
		k = j + k;
		j = temp;

	}
	printf("数列前二十项之和:%16.10f\n", s);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"


int main()
{
	double s = 0, p = 1;
	int n;
	for (n = 1; n <= 20; n++)
	{
		p = p*n;
		s = p + s;
	}

	printf("1��20�׳˺�:%22.15e\n", s);
	return 0;
}
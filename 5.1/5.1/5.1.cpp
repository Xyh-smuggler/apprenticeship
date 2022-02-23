#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"

int main()
{
	int sign = 1,i;
	double pi = 0, n = 1, term = 1;
	for (i = 0; fabs(term) >= 1e-6; i++)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
	}
	pi = pi * 4;

	printf("pi=%lf the time of calculating:%d", pi, i);
	return 0;
}
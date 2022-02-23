#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int i, j, k,n;
	printf("所有的水仙花数:");
	for (i = 100; i < 1000; i++)
	{
		j = i / 100;
		k = (i - j * 100) / 10;
		n = (i - j * 100 - k * 10);
		if (j*j*j + k*k*k + n*n*n == i)
			printf("%d ", i);
	}	
	printf("\n");
	return 0;
}
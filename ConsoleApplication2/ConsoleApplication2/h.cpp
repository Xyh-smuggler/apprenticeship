#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"


int main()
{
	int nu=0;
	int i;
	extern int recursion();
	recursion();
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
	}
	printf("input an integar:");
	scanf("%d", &nu);
	if (nu % 2 == 1)
	{
		printf("the %d is odd", nu);
	}
	else
		printf("the %d is even", nu);

	

	return 0;
}
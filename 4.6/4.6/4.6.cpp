#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int x;
	printf("ÊäÈëxµÄÖµ:");
	scanf("%d", &x);
	if (x < 1)
		printf("y=%d", x);
	else if (x < 10)
		printf("y=%d", (x * 2 - 1));
	else
		printf("y=%d", (3 * x - 11));
	return 0;
}
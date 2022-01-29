#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int recursion()
{
	int i, t=1;

	for (i = 2; i<=5;i++)
	{
		t = t*i;
	}
	printf("output of recursion:%d\n",t);
	return 0;
}
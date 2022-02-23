#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int i,s=1;
	for (i = 1; i <= 9; i++)
	{
		s = (s + 1)*2;

	}

	printf("第一天摘了%d个桃子", s);
	return 0;
}
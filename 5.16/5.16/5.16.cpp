#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int i, j, k;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2 - i; j++)//ǰ����ÿ���ж��ٸ��յ�
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; k++)
			printf("*");
		printf("\n");
	}


	return 0;
}
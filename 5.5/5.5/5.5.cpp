#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int a, n, sum=0, p=0,i=1;
	printf("a= n=");
	scanf("%d %d", &a, &n);
	while (i <= n)
	{
		p = p + a;
		sum = sum + p;
		p = p * 10;
		i++;

	}
	printf("a+aa+.....:%d", sum);
	return 0;
}
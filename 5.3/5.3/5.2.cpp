#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int m, n,temp,ji,yu;
	printf("请输入两个正整数:");
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		temp = n;
		n = m;
		m = temp;
	}
	ji = m*n;
	while ((m%n)!= 0)
	{
		yu = m%n;
		m = n;
		n = yu;
		
	}
	printf("最大公约数:%d,最小公倍数:%d", n, ji / n);
	return 0;
}
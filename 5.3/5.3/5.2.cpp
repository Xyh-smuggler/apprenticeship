#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int m, n,temp,ji,yu;
	printf("����������������:");
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
	printf("���Լ��:%d,��С������:%d", n, ji / n);
	return 0;
}
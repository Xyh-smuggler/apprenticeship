#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include"math.h"

int main()
{
	float r, m, d, p;
	scanf("%f", &r);
	printf("r is:%f\n", r);

	scanf("%f", &d);
	printf("d is:%f\n", d);

	scanf("%f", &p);
	printf("p is:%f\n", p);

	m = (log(p / (p - d*r))) / (log(1 + r));
	printf("m=%6.1f\n", m);

	return 0;
}
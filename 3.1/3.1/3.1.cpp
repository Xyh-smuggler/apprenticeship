#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "math.h"
int main()
{
	float x, y, z;
	printf("Please input  X:");
	scanf("%f", &x);

	printf("Please input Y:");
	scanf("%f", &y);

	z = pow(x+1,y);

	printf("You`ve inputed X=%f Y=%f\n", x, y);
	printf("The final result is %f%%", z);

	return 0;
}
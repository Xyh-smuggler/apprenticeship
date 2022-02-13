#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int grade;
	printf("ÊäÈë·ÖÊý:");
	scanf("%d", &grade);
	if (grade >= 90)
		printf("the scale is A", grade);
	else if (grade >= 80)
		printf("the scale is B", grade);
	else if (grade >= 70)
		printf("the scale is C", grade);
	else if (grade >= 60)
		printf("the scale is D", grade);
	else
		printf("the scale is E", grade);
	return 0;
}
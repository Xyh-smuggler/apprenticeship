#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	int num,place,wan,qian,bai,shi,ge;
	printf("输入一个不多于5位的正整数以及:");
	scanf("%d", &num);
	while (num > 99999 || num<1e-6)
	{
		printf("输入有误，重新输入:");
		scanf("%d",&num);
	}
	if (num > 9999)
		place = 5;
	else if (num > 999)
		place = 4;
	else if (num > 99)
		place = 3;
	else if (num > 9)
		place = 2;
	else
		place = 1;
	printf("%d是%d位数\n", num, place);
	printf("每位数字为:");
	wan = num / 10000;
	qian = (num - wan * 10000) / 1000;
	bai = (num - wan * 10000 - qian * 1000) / 100;
	shi = (num - wan * 10000 - qian * 1000 - bai * 100) / 10;
	ge = (num - wan * 10000 - qian * 1000 - bai * 100 - shi * 10);
	switch (place)
	{
		case 5:{
				   printf("%d,%d,%d,%d,%d", wan, qian, bai, shi, ge);
				   printf("\n倒序数为:");
				   printf("%d, %d, %d, %d, %d", ge, shi, bai, qian, wan);
				   break;
		}
		case 4:
		{
				  printf("%d,%d,%d,%d", qian, bai, shi, ge);
				  printf("\n倒序数为:");
				  printf("%d, %d, %d, %d", ge, shi, bai, qian);
				  break;
		}
		case 3:
		{
				  printf("%d,%d,%d", bai, shi, ge);
				  printf("\n倒序数为:");
				  printf("%d, %d, %d", ge, shi, bai);
				  break;
		}
		case 2:
		{
				  printf("%d,%d",  shi, ge);
				  printf("\n倒序数为:");
				  printf("%d, %d", ge, shi);
				  break;
		}
		case 1:
		{
				  printf("%d",ge);
				  printf("\n倒序数为:");
				  printf("%d", ge);
				  break;
		}
	}
	return 0;
}
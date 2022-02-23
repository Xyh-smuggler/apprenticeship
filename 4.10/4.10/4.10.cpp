#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"


int main()
{
	int i, place;
	double	reward;
	printf("输入利润:");
	scanf("%d", &i);
	if (i <= 100000)
		place = 1;
	else if (i <= 200000)
		place = 2;
	else if (i <= 400000)
		place = 3;
	else if (i <= 600000)
		place = 4;
	else if (i <= 1000000)
		place = 5;
	else
		place = 6;
	printf("奖金应该为:");
	switch (place)
	{
	case 1:{
			   reward = i*0.1;
			   printf("%f", reward);
			   break;
	}
	case 2:{
			   reward = 100000*0.1+(i-100000)*0.75;
			   printf("%f", reward);
			   break;
	}
	case 3:{
			   reward = 100000*0.1+100000*0.75+(i-200000)*0.05;
			   printf("%f", reward);
			   break;
	}
	case 4:{
			   reward = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + (i - 400000)*0.03;
			   printf("%f", reward);
			   break;
	}
	case 5:{
			   reward = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + 200000*0.03+(i-600000)*0.015;
			   printf("%f", reward);
			   break;
	}
	case 6:{
			   reward = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + 200000 * 0.03 + 400000*0.015 + (i - 1000000)*0.01;
			   printf("%f", reward);
			   break;
	}

	}
	return 0;
}
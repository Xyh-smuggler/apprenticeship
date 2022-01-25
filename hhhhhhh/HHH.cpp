#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

struct BOOK
{
	char name[10];
	long price;
};

int main()
{
	/*extern int add(int,int);
	extern int HH;*/
	struct BOOK b1 = { "C语言",55 };
	struct BOOK* pb = &b1;
	printf("price:%d\n", pb->price);;
	/*printf("price:%d\n",(*pb).price );*/
	printf("书名：%s\n",b1.name);
	printf("价格：%d\n", b1.price );
	/*printf("add=%d\n", add(2, 3));
	printf("HH=%d\n", HH);*/
	return 0;
}
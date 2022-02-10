#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

void action1(int x, int y)
{
	printf("a+b:%d",x+y);

}

void action2(int x, int y)
{
	printf("a*b:%d", x * y);

}

int main()
{
	void action1(int x, int y), action2(int x, int y);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch)
	{
	case 'a':
	case 'A':action1(a, b); break;
	case 'B':
	case 'b':action2(a, b); break;

	}
	return 0;
}
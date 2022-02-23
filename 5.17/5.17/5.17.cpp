#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	char i, j, k;//A--i B--j C--k
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k&&j != k)
					{
						if (i != 'x'&&k != 'x'&&k != 'z')
							printf("A--%c B--%c C--%c", i, j, k);
					}
				}
			}
		}
	}


	return 0;
}
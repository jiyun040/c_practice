#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
	}
	/*
	for (i = 1; i <= 20; i += 2)
	{
		printf("%d ", i);
	}*/
	return 0;
}
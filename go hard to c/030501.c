#include <stdio.h>
#pragma warning(disable:4996)

//2중 for문 연습1
int main()
{
	int i, j;

	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}

	return 0;
}

//2중 for문 연습2
int main()
{
	int num = 1;

	for (int i = 1; i <4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			printf("%2d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
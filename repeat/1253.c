#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			printf("%d ", i);
		}
	}
	else if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			printf("%d ", i);
		}
	}
	else if (a == b)
	{
		printf("%d ", a);
	}
	return 0;
}
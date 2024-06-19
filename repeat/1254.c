#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a, b;
	scanf("%c %c", &a, &b);

	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			printf("%c ", i);
		}
	}
	else if (a == b)
	{
		printf("%c ", a);
	}

	return 0;
}
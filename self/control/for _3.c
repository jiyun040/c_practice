#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
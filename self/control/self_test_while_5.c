#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n;

	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
		{
			break;
		}
		if (n % 3 != 0)
		{
			continue;
		}
		if (n % 3 == 0)
		{
			printf("%d\n", n / 3);
		}
	}

	return 0;
}
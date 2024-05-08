#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, i = 1;
	scanf("%d\n", &n);

	while (i <= n)
	{
		printf("%d ", i++);
	}

	return 0;
}
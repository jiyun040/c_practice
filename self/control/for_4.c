#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, n, sum = 0;

	scanf("%d", &n);

	for (i = n; n <= 100; n++)
	{
		sum += n;
	}
	printf("%d", sum);

	return 0;
}
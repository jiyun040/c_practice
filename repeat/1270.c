#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	scanf("%d", &n);
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 10 == 1)
		{
			result++;
		}
	}
	printf("%d", result);

	return 0;
}
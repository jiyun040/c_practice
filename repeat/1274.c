#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	scanf("%d", &n);
	int index = 1;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			index = 0;
			break;
		}
	}

	if (index)
		printf("prime");
	else
		printf("not prime");

	return 0;
}
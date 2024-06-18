#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	int fac = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("%d", fac);

	return 0;
}
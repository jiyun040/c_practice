#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, n;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	int result = a;

	for (int i = 2; i <= n; i++)
	{
		result = result * b + c;
	}
	printf("%d", result);

	return 0;
}
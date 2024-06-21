#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		cnt += i;
	}
	printf("%d", cnt);

	return 0;
}
#include <stdio.h>

int sum(int a)
{
	if (a == 1)
		return 1;
	else
		return a + sum(a - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}
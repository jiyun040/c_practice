#include <stdio.h>

int re(int a);

int main()
{
	int n;
	scanf("%d", &n);
	re(n);
	return 0;
}

int re(int a)
{
	printf("%d\n", a);
	if (a == 1)
		return;
	re(a - 1);
}
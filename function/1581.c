#include <stdio.h>

int myswap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
}
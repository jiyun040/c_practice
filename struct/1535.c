#include <stdio.h>
#pragma warning(disable:4996)

int n, d[110];

int f()
{
	int max = 0;
	int i = 0;

	while (i < n)
	{
		if (d[i] > d[max])
		{
			max = i;
		}
		i++;
	}
	return max + 1;
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &d[i]);

	printf("%d", f());

	return 0;
}
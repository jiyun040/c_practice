#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int k, n[100];
	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf("%d\n", n[j]);
		}
	}
	return 0;
}
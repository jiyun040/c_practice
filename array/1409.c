#include <stdio.h>

int main()
{
	int num[11];
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &num[i]);
	}

	int k;
	scanf("%d", &k);

	printf("%d", num[k]);

	return 0;
}
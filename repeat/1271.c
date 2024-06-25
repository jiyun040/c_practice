#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	scanf("%d", &n);
	int num[1000000];
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (max < num[i])
		{
			max = num[i];
		}
	}
	printf("%d", max);

	return 0;
}
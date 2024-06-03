#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int start, end;
	scanf("%d %d", &start, &end);

	for (int i = start; i <= end; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n", i, j, i * j);
		}
	}

	return 0;
}
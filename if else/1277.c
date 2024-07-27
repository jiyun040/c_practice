#include <stdio.h>

int main()
{
	int N, i;
	scanf("%d", &N);

	int numbers[N];
	for (i = 0; i < N; i++)
	{
		scanf("%d", &numbers[i]);
	}

	print("%d %d %d", numbers[0], numbers[((N + 1) / 2) - 1], numbers[N - 1]);

	return 0;
}
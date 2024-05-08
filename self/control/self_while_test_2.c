#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, odd = 0, even = 0;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		if (n % 2 == 1)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d", even);

	return 0;
}
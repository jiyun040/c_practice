#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n;
	int sum = 0, cnt = 0;
	double avg;

	while (1)
	{
		scanf("%d", &n);
		if (n > 100)
		{
			break;
		}
		sum += n;
		cnt++;
		avg = (double)sum / cnt;
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1lf", avg);

	return 0;
}
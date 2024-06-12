#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);

	double avg;
	avg = (n1 + n2 + n3) / 3.0;

	printf("%.2lf", avg);

	return 0;
}
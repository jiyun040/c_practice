#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);

	for (double i = a; i <= b; i += 0.01)
	{
		printf("%.2lf ", i);
	}

	return 0;
}
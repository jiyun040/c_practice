/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("#으로 메모리가 부족합니다.");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;
	printf("%d\t%lf", *pi, *pd);

	free(pi);
	free(pd);

	return 0;
}*/
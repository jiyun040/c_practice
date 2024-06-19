#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
		printf("*");

	return 0;
}
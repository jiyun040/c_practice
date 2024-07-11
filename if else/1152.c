#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if (num < 10)
		printf("small");
	else
		printf("big");

	return 0;
}
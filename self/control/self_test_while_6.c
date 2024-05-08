#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n;

	do
	{
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");

		printf("number?\n");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			printf("Seoul\n");
			break;

		case 2:
			printf("Washington\n");
			break;

		case 3:
			printf("Tokyo\n");
			break;

		case 4:
			printf("Beijing\n");
			break;

		default:
			printf("none\n");
			break;
		}
	} while ((n >= 1) && (n <= 4));
	return 0;
}
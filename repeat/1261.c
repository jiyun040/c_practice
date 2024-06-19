#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)

int main()
{
	int num[10];
	bool zero = true;
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 5 == 0)
		{
			printf("%d", num[i]);
			zero = false;
			break;
		}
	}

	if (zero == true)
	{
		printf("0");
	}

	return 0;
}
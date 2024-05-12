#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char a;
	scanf("%c", &a);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", a);
	}

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m;
	char cal;
	scanf("%d %c %d", &n, &cal, &m);
	
	if (cal == '+')
	{
		printf("%d", n + m);
	}

	else if (cal == '-')
	{
		printf("%d", n - m);
	}

	else if (cal == '*')
	{
		printf("%d", n * m);
	}

	else if (cal == '/')
	{
		printf("%.02f", (float)n / (float)m);
	}

	return 0;
}
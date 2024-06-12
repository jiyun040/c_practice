#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	scanf("%d", &n);

	switch (n)
	{
	case 1 :
	case 3 :
	case 5 :
	case 7 :
		printf("oh my god");
		break;
	case 2 :
	case 4 :
	case 6 :
		printf("snjoy");
		break;
	}
	return 0;
}
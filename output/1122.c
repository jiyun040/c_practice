#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int sec;
	int min = 1;
	scanf("%d", &sec);
	if (sec >= 60)
		printf("%d %d", (sec / 60), (sec % 60));
	else
		printf("%d %d",(sec / 60), sec);

	return 0;
}
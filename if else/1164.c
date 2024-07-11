#include <stdio.h>

int main()
{
	int len1, len2, len3;
	scanf("%d %d %d", &len1, &len2, &len3);

	if (len1 <= 170 || len2 <= 170 || len3 <= 170)
		printf("CRASH");
	else
		printf("PASS");

	return 0;
}
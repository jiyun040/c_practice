#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int min = n1;
	
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;

	printf("%d", min);

	return 0;
}
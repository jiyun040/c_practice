#include <stdio.h>

int NumCompare(int num1, int num2);
int main()
{
	int n1, n2;
	while (1) {
		scanf("%d %d", &n1, &n2);
		if (n1 == 0 || n2 == 0)
			break;
		printf("%d\n", NumCompare(n1, n2));
	}
	printf("%d\n", NumCompare(n1, n2));
	return 0;
}
int NumCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
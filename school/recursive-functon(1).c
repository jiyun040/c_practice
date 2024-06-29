#include <stdio.h>

int n2;

void odd(int n)
{
	if (n > n2)
		return;
	if (n % 2 == 1)
		printf("%d\n", n);
	odd(n + 1);
}

int main()
{
	int n1;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	odd(n1);

	return 0;
}
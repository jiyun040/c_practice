#include <stdio.h>

int plus(int a)
{
	return a + 10;
}

int minus(int a)
{
	return a - 10;
}

int main()
{
	int num;
	printf("���� �Է�:  ");
	scanf("%d", &num);
	printf("10 ���� �� : ");
	printf("%d\n", plus(num));
	printf("10 �� �� : ");
	printf("%d\n", minus(num));
}
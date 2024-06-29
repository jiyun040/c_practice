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
	printf("정수 입력:  ");
	scanf("%d", &num);
	printf("10 더한 값 : ");
	printf("%d\n", plus(num));
	printf("10 뺀 값 : ");
	printf("%d\n", minus(num));
}
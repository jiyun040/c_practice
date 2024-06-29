#include <stdio.h>

int square(int a)
{
	return a * a;
}

int main()
{
	int a;
	printf("제곱할 정수 입력 : ");
	scanf("%d", &a);
	printf("%d의 제곱 : %d",a, square(a));
}
#include <stdio.h>

int square(int a)
{
	return a * a;
}

int main()
{
	int a;
	printf("������ ���� �Է� : ");
	scanf("%d", &a);
	printf("%d�� ���� : %d",a, square(a));
}
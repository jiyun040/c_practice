#include <stdio.h>
#pragma warning(disable:4996)

//5���� ���� �Է� �ް� ������ ���ϱ�
int main()
{
	int num;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("%d", sum);

	return 0;
}

//5���� ���� �Է� �ް� ������ ���ϱ�
int main()
{
	int num;
	int multi = 1; //0���� �ʱ�ȭ�� ���� 0���� �����⿡ 1���� �ʱ�ȭ

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		multi *= num;
	}
	printf("%d", multi);

	return 0;
}

//5���� ���� �Է� �ް� �ִ밪 ���ϱ�
int main()
{
	int num;
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
		}
	}
	printf("%d", max);

	return 0;
}

//5���� ���� �Է� �ް� �ּҰ� ���ϱ�
int main()
{
	int num;
	int min;

	scanf("%d", &min);

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num);
		if (min > num)
		{
			min = num;
		}
	}
	printf("%d", min);

	return 0;
}
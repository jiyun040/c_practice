#include <stdio.h>
#pragma warning(disable:4996)

//5개의 정수 입력 받고 누적합 구하기
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

//5개의 정수 입력 받고 누적곱 구하기
int main()
{
	int num;
	int multi = 1; //0으로 초기화시 값이 0으로 나오기에 1으로 초기화

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		multi *= num;
	}
	printf("%d", multi);

	return 0;
}

//5개의 정수 입력 받고 최대값 구하기
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

//5개의 정수 입력 받고 최소값 구하기
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
#include <stdio.h>
#pragma warning(disable:4996)

//배열을 활용 해 총 몇 번 불렸는지 개수 세기
int main()
{
	int check[11] = { 0 };
	int num;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num >= 1 && num <= 10)
		{
			check[num]++;
		}
	}

	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", check[i]);
	}

	return 0;
}
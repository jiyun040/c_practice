#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int arr[4][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
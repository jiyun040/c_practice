#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int year, month, day;
	int palja;
	scanf("%d %d %d", &year, &month, &day);

	palja = year + month + day;

	if ((palja / 100) % 2 == 0)
		printf("대박");
	else
		printf("그럭저럭");

	return 0;
}
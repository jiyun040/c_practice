#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char str[30];
	gets(str);//scanf("%[^\n]s", str);
	printf("%s", str);

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char name[20];
	int age;
	char code;
	double key;

	scanf("%s", name);
	scanf("%d", &age);
	scanf(" %c", &code);
	scanf("%g", &key);

	printf("%s\n%d\n%s\n%g", name, age, code, key);

	return 0;
}
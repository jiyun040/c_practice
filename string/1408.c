#include <stdio.h>
#include <string.h>

int main()
{
	char word[20];
	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++)
	{
		printf("%c", word[i] + 2);
	}

	printf("\n");

	for (int i = 0; i < strlen(word); i++)
	{
		printf("%c", (word[i] * 7) % 80 + 48);
	}

	return 0;
}
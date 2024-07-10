#include <stdio.h>
#include <string.h>

int main()
{
	char word[16];
	scanf("%s", word);

	if (strcmp(word, "love") == 0)
	{
		printf("I love you.");
	}
	else
	{
		printf(" ");
	}

	return 0;
}
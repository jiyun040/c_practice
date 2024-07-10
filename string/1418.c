#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	scanf("%s", word);;

	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == 't')
		{
			printf("%d ", i + 1);
		}
	}

	return 0;
}
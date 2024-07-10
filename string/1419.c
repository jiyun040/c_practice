
#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char str[100];

    gets(str); //공백 포함한 문자열 받기

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'l')
        {
            if (str[i + 1] == 'o')
            {
                if (str[i + 2] == 'v')
                {
                    if (str[i + 3] == 'e')
                    {
                        cnt++;
                        i += 3;
                    }
                }
            }
        }
    }

    printf("%d", cnt);

    return 0;
}

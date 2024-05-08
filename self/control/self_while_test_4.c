#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int n, cnt = 0;

    while (n != 0)
    {
        scanf("%d", &n);
        if (n % 3 != 0 && n % 5 != 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
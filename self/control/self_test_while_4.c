#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int n;
    int sum = 0, cnt = 0;
    double avg;

    while (1)
    {
        scanf("%d", &n);
        sum += n;
        cnt++;
        if (n >= 100)
        {
            break;
        }
    }
    avg = (double)sum / cnt;

    printf("%d\n", sum);
    printf("%.1lf", avg);

    return 0;
}
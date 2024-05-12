#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
        char choice;
        float base, height, area;

        do {
            printf("Base = ");
            scanf("%f", &base);

            printf("Height = ");
            scanf("%f", &height);

            area = 0.5 * base * height;
            printf("Triangle width = %.1f\n", area);

            printf("Continue? ");
            scanf(" %c", &choice);

        } while (choice == 'Y' || choice == 'y');

        return 0;
    }
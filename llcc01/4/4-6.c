#include <stdio.h>
int main()
{
    int l, c, i, j, k;
    scanf("%d %d", &l, &c);

    printf("|");

    i = c;
    while (i--)
    {
        printf("*****|");
    }
    printf("\n");

    i = l;
    while (i--)
    {

        printf("|");
        k = c;
        while (k--)
        {
            printf("  |  |");
        }
        printf("\n");

        printf("|");
        k = c;
        while (k--)
        {
            printf("--+--|");
        }
        printf("\n");

        printf("|");
        k = c;
        while (k--)
        {
            printf("  |  |");
        }
        printf("\n");

        printf("|");
        k = c;
        while (k--)
        {
            printf("*****|");
        }
        printf("\n");
    }

    return 0;
}
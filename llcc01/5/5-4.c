#include <stdio.h>
int main()
{
    int x, a = 10;
    scanf("%d", &x);
    if (1 <= x && x <= 10000)
    {
        while (x > a)
        {
            a *= 10;
        }
        if (x * x % a == x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("%d out of range\n", x);
    }
    return 0;
}
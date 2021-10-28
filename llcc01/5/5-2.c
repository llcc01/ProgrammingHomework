#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 10)
    {
        while (n)
        {
            putchar(n % 10 + '0');
            n /= 10;
        }
        putchar('\n');
    }
    else
    {
        printf("The number cannot be changed.\n");
    }
    return 0;
}
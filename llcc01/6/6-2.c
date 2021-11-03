#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (((n - 1) % 5) || ((n - 5) % 6) || ((n - 6) % 7) || ((n - 10) % 11))
    {
        n++;
    }
    printf("%d\n", n);
    return 0;
}
#include <stdio.h>
char data[10][31] = {0};
int main()
{
    int n, i, offset;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", data[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &offset);
        printf("%s\n", data[offset]);
    }
}
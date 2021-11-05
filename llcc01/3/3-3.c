#include <stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for(i = 1;i<=num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            putchar(' ');
        }
        for(j=0;j<2*i-1;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    for(i = num-1;i>=1;i--)
    {
        for(j=0;j<num-i;j++)
        {
            putchar(' ');
        }
        for(j=0;j<2*i-1;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
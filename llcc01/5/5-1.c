#include <stdio.h>
int main()
{
    char c;
    putchar(getchar());
    while((c=getchar())>='0'&&c<='9')
    {
        putchar(' ');
        putchar(c);
    }
    putchar('\n');
    return 0;
}
#include <stdio.h>
int main()
{
    char c;
    while((c=getchar())!='\n')
    {
        c+=3;
        if((c>'Z'&&c<='Z'+3)||c>'z')
        {
            c-=26;
        }
        putchar(c);
    }
    putchar('\n');
    return 0;
}
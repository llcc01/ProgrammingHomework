#include "stdio.h"
int main(void)
{
    int n;scanf("%d",&n);
    while(1)
    {
        if(n%5==1&&n%6==5&&n%7==6&&n%11==10)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
    return 0;
}
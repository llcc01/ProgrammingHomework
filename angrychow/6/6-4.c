#include "stdio.h"
#include "string.h"
char ch[10];
int main(void)
{
    scanf("%s",ch);
    int n = strlen(ch);
    int fl = 1;
    for(int i=0;i<n;i++)
    {
        int j=n-1-i;
        if(ch[i]!=ch[j])fl=0;
    }
    if(fl)printf("Yes");
    else printf("No");
    return 0;
}
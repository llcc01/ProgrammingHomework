#include "stdio.h"
#include "string.h"
int main(void)
{
    char ch[10];scanf("%s",ch);
    int ret = 0;
    for(int i=0;i<strlen(ch); i++)
    {
        if(i[ch]=='1')ret+=(1<<(strlen(ch)-i-1));
    }
    printf("%d",ret);
}
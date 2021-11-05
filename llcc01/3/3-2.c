#include <stdio.h>
int main()
{
    int a=0,s=0,n=0,o=0;
    int input=0;
    while (1)
    {
        input = getchar();
        if(input=='\n')
        {
            break;
        }
        else if((input >='a' && input <='z')||(input >='A' && input <='Z'))
        {
            a++;
        }
        else if(input == ' ')
        {
            s++;
        }
        else if(input >='0' && input <='9')
        {
            n++;
        }
        else
        {
            o++;
        }
    }
    printf("%d %d %d %d\n",a,s,n,o);
    return 0;
}
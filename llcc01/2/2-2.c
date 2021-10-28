#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year % 4)
    {
        printf("No\n");
    }
    else
    {
        if (year % 100)
        {
            printf("Yes\n");
        }
        else
        {
            if (year % 400)
            {
                printf("No\n");
            }
            else
            {
                printf("Yes\n");
            }
        }
    }
    return 0;
}
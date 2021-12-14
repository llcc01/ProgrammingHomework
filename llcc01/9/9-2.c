#include <stdio.h>
int nums[1000];
int main()
{
    int n, i, m, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &t);
        for (i = 0; i < n; i++)
        {
            if (nums[i] == t)
            {
                break;
            }
        }
        if (i == n||n==1)
        {
            printf("NULL\n");
        }
        else
        {
            if (i == 0)
            {
                printf("%d\n", nums[1]);
            }
            else if (i == n - 1)
            {
                printf("%d\n", nums[n - 2]);
            }
            else
            {
                printf("%d %d\n", nums[i-1],nums[i+1]);
            }
        }
    }
    return 0;
}
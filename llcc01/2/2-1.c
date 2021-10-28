#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        printf("The larger number is %d, the smaller number is %d.\n", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("The larger number is %d, the smaller number is %d.\n", n2, n1);
    }
    else
    {
        printf("The two numbers are equal.\n");
    }
    return 0;
}
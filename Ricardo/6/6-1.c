#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int greatest_common_divisor;
    int least_common_multiple;
    int a, b;
    int bool_num;
    if (m == 1)
    {
        greatest_common_divisor = m;
        least_common_multiple = n;
    }
    else if (n == 1)
    {
        greatest_common_divisor = n;
        least_common_multiple = m;
    }
    else
    {
        if (m >= n)
        {
            a = m;
            b = n;
        }
        else
        {
            a = n;
            b = m;
        }
        while (a % b != 0)
        {
            int temp = a % b;
            a = b;
            b = temp;
        }
        greatest_common_divisor = b;
        least_common_multiple = m * (n / greatest_common_divisor);
        //我不理解，为啥这里不加括号就不能过，但是加了就可以过
        //现在我理解了， m * n有可能超过int的储存范围
        //淦
    }
    printf("%d %d\n", greatest_common_divisor, least_common_multiple);
    return 0;
}
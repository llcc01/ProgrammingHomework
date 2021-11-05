//经过数学推导，不难得出递推公式
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int result = 2 + (num + 2) * (num - 1) / 2;
    printf("%d\n", result);
    return 0;
}
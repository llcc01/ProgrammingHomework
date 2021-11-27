#include <stdio.h>

int reverseNum(int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("The reverse form of number %d is %d.\n", num, reverseNum(num));

    return 0;
}

/* 请在这里填写答案 */
int reverseNum(int n)
{
    int re = 0;
    while (n)
    {
        re = re * 10 + n % 10;
        n /= 10;
    }
    return re;
}
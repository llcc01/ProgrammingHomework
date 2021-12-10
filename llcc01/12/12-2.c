#include <stdio.h>
const int k[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char last[] = "10X98765432";
char ID[18] = {0};
int main()
{
    int i, n, sum;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        sum = 0;
        for (i = 0; i < 17; i++)
        {
            sum += (getchar() - '0') * k[i];
        }
        sum %= 11;
        printf(last[sum] == getchar() ? "right\n" : "wrong\n");
        getchar();
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    long double result = 1;
    for(long double i = 2; i <= num; i++){
        result = result * (num + i) / i;
    }
    printf("%.0Lf\n", result);
    return 0;
}
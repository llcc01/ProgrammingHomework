#include <stdio.h>

int reverse(int n)
{   
    int result = 0;
    while(n != 0){
        result = result * 10;
        result = result + n % 10;
        n = n / 10;
    }
    return result;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}
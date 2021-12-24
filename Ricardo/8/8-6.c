#include <stdio.h>

int evaluation(int n, int a);

int main(void)
{
    int n, a;
    scanf("%d%d", &n, &a);
    printf("%d\n", evaluation(n ,a));
    return 0;
}

int evaluation(int n, int a)
{
    if(n == 1){
        return 1 + a + a * a;
    }else{
        return a * evaluation(n - 1, a) + 1;
    }
}
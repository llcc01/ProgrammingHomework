#include <stdio.h>

int countBinary(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", countBinary(n));
    return 0;
}

int countBinary(int n)
{
    if(n / 2 == 0){
        return 1;
    }else{
        return 1 + countBinary(n / 2);
    }
}
#include <stdio.h>

int GCD(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", GCD(a, b));
}

int GCD(int a, int b)
{
    if(a <= b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a % b == 0){
        return b;
    }else{
        return GCD(b, a % b);
    }
}
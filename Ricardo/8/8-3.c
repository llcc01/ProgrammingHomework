#include <stdio.h>

int findMax(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", findMax(n));
    return 0;
}

int findMax(int n)
{
    if(n == 1){
        int a;
        scanf("%d", &a);
        return a;
    }else{
        int b;
        scanf("%d", &b);
        int temp = findMax(n - 1);
        if( b >= temp){
            return b;
        }else{
            return temp;
        }
    }
}
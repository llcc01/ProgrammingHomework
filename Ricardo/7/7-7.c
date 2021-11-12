#include <stdio.h>
//为了避免编辑器报错，我不得不在本地环境引入了这个库，复制粘贴的时候不要把这个万一也搞进去了

int isPerfect(int n)
{
    int result;
    int sum = 0;
    int temp = n;
    for(int i =1; i <= n / 2; i++){
        if(temp % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

void printPerfect(int n)
{
    int sum = 0;
    for(int i =1; i <= n / 2; i++){
        if(n % i == 0){
            sum = sum + i;
            if(sum == 1){
                printf("%d=%d+", n, i);
            }else if(sum == n){
                printf("%d\n", i);
            }else{
                printf("%d+", i);
            }
        }
    }
}
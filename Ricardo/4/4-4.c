#include <stdio.h>
#define MAX 1000

int prime(int num)
{
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
//垃圾至极，运行时间长达100ms以上

int prime_max(int num)
{
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
//这样写就可以将运行时间缩短到个位

int prime_max_pro(int num)
{
    int prime[MAX] = {0, 0, 1};
    //初始化1为质数
    int vis[MAX] = {0 ,0, 0};
    for(int i = 3; i <= MAX; i++){
        if(vis[i] == 0){
            //vis数组中的0表示未判断, 1表示这个数已经被判断为合数
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    //如果i为合数
                    for(int n = i; n <= MAX; n = n + i){
                        vis[n] = 1;
                        //将vis数组中所有i的倍数都置为合数
                    }
                    break;
                }
            }
        }
        if(vis[i] == 0){
            //到这里时，如果i仍为0，那么说明i必是一个质数
            prime[i] = 1;
        }
    }
    return prime[num];
}


int main(void)
{
    int row_number;
    scanf("%d", &row_number);
    for(int i = 0; i < row_number; i++){
        int prime_number = 0;
        int item;
        while (1)
        {
            scanf("%d", &item);
            if(item == -1){
                break;
            }
            if(prime_max_pro(item)){
                prime_number++;
            }
        }
        printf("%d\n", prime_number);
    }
    return 0; 
}
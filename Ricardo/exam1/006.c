#include <stdio.h>

int main(void)
{
    long long int min, max;
    scanf("%lld %lld", &min, &max);
    long long int result = 0;
    //下列的代码由zyl同学提供，我想到的垃圾代码会在最后一个点炸掉
    for(long long int x = min; x <= max; x++){
        for(long long int y = x; y <= max; y++){
            for(long long int z = x; z <= max; z++){
                if(z*z*(x*x + y*y) == x*x*y*y){
                    result++;
                }
            }
        }
    }
    printf("%lld\n", result);
    return 0;
}
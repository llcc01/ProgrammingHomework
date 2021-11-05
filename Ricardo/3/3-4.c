#include <stdio.h>

long long int function(long long int number){
    long long int result = 0;
    if (number == 1 || number == 2){
        return 0;
    }else{
        for (long long int i = 3; i <= number; i++){
            result = result + (i - 2) * (i -1 ) * i;
        }
        return result;
    }
}

int main(void)
{
    long long int number;
    long long int result = 0;
    scanf("%lld", &number);
    for (long long int i = 1; i <= number; i++){
        result = result + function(i);
    }
    printf("%lld\n", result);
    return 0;
}


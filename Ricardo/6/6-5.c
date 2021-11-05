#include <stdio.h>

int main(void)
{
    int num_2;
    int result = 0;
    int exponent = 0;
    scanf("%d", &num_2);
    while(num_2 != 0){
        int temp = num_2 % 10;
        int number = 1;
        //表示每一位的基数
        for(int i = 0; i < exponent; i++){
            number = number * 2;
        }
        exponent++;
        result = result + temp * number;
        num_2 = num_2 / 10;
    }
    printf("%d\n", result);
    return 0;
}
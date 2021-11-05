#include <stdio.h>

int number_array[100];

int eachNumber(int num)
{
    int count = 0;
    int temp[100];
    while(1){
        temp[count] = num % 10;
        count++;
        num = num / 10;
        if(num == 0){
            break;
        }
    }
    for(int i = count - 1; i >= 0; i--){
        number_array[count - 1 - i] = temp[i];
    }
    return count - 1;
}

int main(void)
{
    int num;
    scanf("%d", &num);
    if(num < 1 || num > 10000){
        printf("%d out of range\n", num);
        return 0;
    }
    int power_num = num * num;
    int i = 1;
    int length = eachNumber(num);
    for(int j = 0; j <= length; j++){
        i = i * 10;
    }
    int result = power_num % i;
    if(result == num){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
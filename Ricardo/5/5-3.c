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
        number_array[count - 1 - i]  =temp[i];
    }
    return count - 1;
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i =m; i <= n; i++){
        int num = i / m;
        int length = eachNumber(i);
        int sum = 0;
        for (int j =0; j <= length; j++){
            sum = sum + number_array[j] * number_array[j];
        }
        if(num == sum){
            printf("%d\n", i);
        }
    }
    return 0;
}

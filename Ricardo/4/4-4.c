#include <stdio.h>

int prime(int num)
{
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
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
            if(prime(item)){
                prime_number++;
            }
        }
        printf("%d\n", prime_number);
    }
    return 0;
}
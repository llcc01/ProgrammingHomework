#include <stdio.h>

int main(void)
{
    int row_number;
    scanf("%d", &row_number);
    for(int i = 0; i < row_number; i++){
        int item_number = 0;
        int sum = 0;
        scanf("%d", &item_number);
        for (int j = 0; j < item_number; j++){
            int price;
            scanf("%d", &price);
            sum = sum + price;
        }
        if(sum >= 100 && sum < 200){
            sum = sum - 30;
        }
        if(sum >=200 && sum < 300 ){
            sum = sum - 70;
        }
        if(sum >= 300 && sum < 400){
            sum = sum - 110;
        }
        if(sum >= 400){
            sum = sum -160;
        }
        printf("%d\n", sum);
    }
    return 0;
}
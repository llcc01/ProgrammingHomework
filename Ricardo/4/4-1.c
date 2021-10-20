#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);
    int sum = 0;
    int max_number;
    int min_number;
    for(int i = 0; i < number; i++){
        int item;
        scanf("%d", &item);
        sum = sum + item;
        if(i == 0){
            max_number = item;
            min_number = item;
        }else{
            if(item >= max_number){
                max_number = item;
            }
            if(item <= min_number){
                min_number = item;
            }
        }
    }
    printf("%d %d %d\n", sum, max_number, min_number);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int number1, number2;
    int result = 1;
    scanf("%d %d", &number1, &number2);
    if (number2 == 0){
    result = 1;
    }else{
        for(int i = 1; i <= number2; i++){
            result = result * number1;
        }
    }
    printf("%d\n", result);
    return 0;
}
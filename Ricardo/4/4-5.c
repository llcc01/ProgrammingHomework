#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    scanf("%d", &number);
    for(int i = 21; i < number; i = i + 21){
        sum = sum + i;
    }
    printf("%d\n", sum * sum);
    return 0;
}
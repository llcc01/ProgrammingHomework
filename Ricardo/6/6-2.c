#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    for(int people = num; people <= 10000; people++){
        if(people % 5 == 1 && people % 6 == 5 && people % 7 == 6 && people % 11 == 10){
            printf("%d\n", people);
            break;
        }
    }
    return 0;
}
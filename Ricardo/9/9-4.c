#include <stdio.h>
#define MAX_SIZE 10

int main(void)
{
    int num;
    int array_1[MAX_SIZE], array_2[MAX_SIZE];
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &array_1[i]);
    }
    for(int i = 0; i < num; i++){
        scanf("%d", &array_2[i]);
    }
    int result = 0;
    for(int i = 0; i < num; i++){
        result = result + array_1[i] * array_2[i];
    }
    printf("%d\n", result);
    return 0;
}
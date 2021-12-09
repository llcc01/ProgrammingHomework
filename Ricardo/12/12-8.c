#include <stdio.h>
#define SIZE 40
#define STRING_LENGTH 50

int main(void)
{
    char string[SIZE][STRING_LENGTH];
    int position[SIZE];
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%s", string[i]);
    }
    for(int i = 0; i  < num; i++){
        scanf("%d", &position[i]);
    }
    for(int i = 0; i < num; i++){
        printf("%s\n", string[position[i]]);
    }
    return 0;
}
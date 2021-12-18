#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *p;
    int *array = NULL;
    scanf("%d", &num);
    array = malloc(sizeof(int) * num);
    //内存空间十分凶险，要是遇到什么不测，记得直接扔下-1跑路
    if(array == NULL){
        return -1;
    }
    p = array;
    for(int i = 0; i < num; i++){
        scanf("%d", p);
        *p = (0 - *p) * 10;
        p++;
    }
    p = array;
    for(int i = 0; i < num; i++){
        if(i == num - 1){
            printf("%d\n", *p);
            break;
        }
        printf("%d ", *p);
        p++;
    }
    free(array);
    return 0;
}
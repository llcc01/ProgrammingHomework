#include <stdio.h>
#define MAX_SIZE 20

int main(void)
{   
    int a_array[MAX_SIZE];
    int b_array[MAX_SIZE];
    int num; 
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &a_array[i]);
    }
    for(int i = 0; i < num; i++){
        scanf("%d", &b_array[i]);
    }
    for(int i = 0; i < num; i++){
        int position = b_array[i];
        int temp  = a_array[i];
        a_array[i] = a_array[position];
        a_array[position] = temp;
    }
    for(int i = 0; i < num; i++){
        if(i == num -1){
            printf("%d\n", a_array[num - 1]);
            break;
        }
        printf("%d ", a_array[i]);
    }
    return 0;
}
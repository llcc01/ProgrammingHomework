#include <stdio.h>
#define MAX_SIZE 200

int main(void)
{
    int input_array[MAX_SIZE];
    int output_array[MAX_SIZE];
    int num;
    int position = 0;
    //指示输出数组中位置的变量
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &input_array[i]);
    }
    for(int i = 0; i < num; i++){
        int temp = input_array[i];
        if(temp % 2 == 0){
            output_array[position] = temp;
            position++;
        }
    }
    for(int i = 0; i < num; i++){
        int temp  = input_array[i];
        if(temp % 2 == 1){
            output_array[position] = temp;
            position++;
        }
    }
    for(int i = 0; i < position; i++){
        if(i == position - 1){
            printf("%d\n", output_array[position - 1]);
            break;
        }
        printf("%d ", output_array[i]);
    }
    return 0;
}
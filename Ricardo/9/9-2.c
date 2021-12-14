#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{   
    int input_array[MAX_SIZE];
    int aim_array[MAX_SIZE];
    int input_num;
    int aim_num;
    int flags = 0;
    //这是一把指示我们有没有发现目标数字的旗子
    scanf("%d", &input_num);
    for(int i = 0; i < input_num; i++){
        scanf("%d", &input_array[i]);
    }
    scanf("%d", &aim_num);
    for(int i = 0; i < aim_num; i++){
        scanf("%d", &aim_array[i]);
    }
    for(int i = 0; i < aim_num; i++){
        int temp = aim_array[i];
        for(int j = 0; j < input_num; j++){
            if(temp == input_array[j]){
                if(j == 0){
                    if(j + 1 >= input_num){
                        //这里判断一下，可能输入的数组里只有一个数。
                        printf("NULL\n");
                    }else{
                        printf("%d\n", input_array[1]);
                    }
                }else if(j == input_num - 1){
                    printf("%d\n", input_array[input_num - 2]);
                }else{
                    printf("%d %d\n", input_array[j - 1], input_array[j + 1]);
                }
                flags = 1;
            }
        }
        if(flags == 0){
            printf("NULL\n");
        }else{
            flags = 0;
        }
    }
    return 0;
}
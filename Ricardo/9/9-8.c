#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{
    int num;
    int array[MAX_SIZE];
    int result = 1;
    int max_result = 1;
    int temp;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < num - 1; i++){
        temp = array[i];
        if(temp == array[i + 1]){
            result++;
        }else{
            if(result > max_result){
                max_result = result;
            }
            result = 1;
        }
        if(i == num - 2){
            if(result > max_result){
                max_result = result;
            }
        }
    }
    printf("%d\n", max_result);
    return 0;
}
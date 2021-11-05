#include <stdio.h>

int main(void)
{
    int number_array[100];
    int count = 0;
    while(1){
        int temp = getchar();
        if(temp == '\n'){
            break;
        }
        number_array[count] = temp - 48;
        count++;
    }
    count--;
    int bool_num = 1;
    for(int i = 0; i <= (count / 2); i++){
        if(number_array[i] != number_array[count - i]){
            bool_num = 0;
        }
    }
    if(bool_num == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
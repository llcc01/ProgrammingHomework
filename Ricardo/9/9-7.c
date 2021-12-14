#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{
    int a_array[MAX_SIZE];
    int b_array[MAX_SIZE];
    int flags = 0;
    int a_position = 0;
    int b_position = 0;
    while(1){
        int temp;
        scanf("%d", &temp);
        if(temp == -1){
            break;
        }
        a_array[a_position] = temp;
        a_position++;
    }
    while (1)
    {
        int temp;
        scanf("%d", &temp);
        if(temp == -1){
            break;
        }
        b_array[b_position] = temp;
        b_position++;
    }
    for(int i = 0; i < a_position; i++){
        if(a_array[i] == b_array[0]){
            flags = 1;
            for(int j = 1; j < b_position; j++){
                if(a_array[i + j] != b_array[j]){
                    flags = 0;
                }
            }
            if(flags == 1){
                break;
            }
        }
    }
    if(flags == 1){
        printf("ListB is the sub sequence of ListA.\n");
    }else{
        printf("ListB is not the sub sequence of ListA.\n");
    }
    return 0;
}
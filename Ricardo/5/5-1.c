#include <stdio.h>

int main(void)
{
    int number_array[100];
    int count = 0;
    while (1)
    {
        int temp = getchar() - 48;
        if(temp == '\n' - 48){
            break;
        }
        number_array[count] = temp;
        count++;
    }
    for(int i = 0; i < count; i++){
        if(i == count){
            printf("%d\n", number_array[i]);
            break;
        }
        printf("%d ", number_array[i]); 
    }
    return 0;
}
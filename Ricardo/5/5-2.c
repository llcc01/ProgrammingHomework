#include <stdio.h>

int number_array[100];

int eachNumber()
{
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
    return count;
}

int main(void)
{
    int length = eachNumber();
    if(number_array[length - 1] == 0){
        printf("The number cannot be changed.\n");
    }else{
        for(int i = length - 1; i >= 0; i--){
            if(i == 0){
                printf("%d\n", number_array[i]);
                break;
            }
        printf("%d", number_array[i]);
        }
    }
    return 0;
}
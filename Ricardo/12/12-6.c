#include <stdio.h>
#define MAXLEN 20

int factor[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char last_number[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        char string[MAXLEN];
        int sum = 0;
        scanf("%s", string);
        for (int j = 0; j < 17; j++)
        {
            sum = sum + (string[j] - 48) * factor[j];
        }
        sum = sum % 11;
        if (string[17] == last_number[sum])
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
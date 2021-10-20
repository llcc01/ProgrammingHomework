#include <stdio.h>

int main(void)
{
    int number;
    int space_number;
    int star_number;
    scanf("%d", &number);
    int max_star_number = 2 * number - 1;
    for(int i = 1; i <= number; i++){
        star_number = 2 * i - 1;
        space_number = (max_star_number - star_number) / 2;
        for(int j = 0; j < space_number; j++){
            printf(" ");
        }
        for (int j = 0; j < star_number; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = number - 1; i >= 1; i--){
        star_number = 2 * i - 1;
        space_number = (max_star_number - star_number) / 2;
        for(int j = 0; j < space_number; j++){
            printf(" ");
        }
        for (int j = 0; j < star_number; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
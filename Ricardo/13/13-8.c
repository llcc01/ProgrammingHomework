#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);
    int **row_array = malloc(sizeof(int *) * row);
    if(row_array == NULL){
        return -1;
    }
    int **row_array_back = row_array;
    for(int i = 0; i < row; i++){
        *row_array_back = malloc(sizeof(int) * column);
        if(*row_array == NULL){
            return -1;
        }
        row_array_back++;
    }
    for(int i = 0; i < row; i++){
        int **temp = row_array + i;
        int *p = *temp;
        for(int j = 0; j < column; j++){
            scanf("%d", p);
            *p = (0 - *p) * 10;
            p++;
        }
    }
    for(int i = 0; i < row; i++){
        int **temp = row_array + i;
        int *p = *temp;
        for(int j = 0; j < column; j++){
            if(j  == column - 1){
                printf("%d\n", *p);
                break;
            }
            printf("%d ", *p);
            p++;
        }
    }
    for(int i = 0; i < row; i++){
        free(row_array[i]);
    }
    free(row_array);
    return 0;
}
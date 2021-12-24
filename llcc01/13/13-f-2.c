#include <stdio.h>
#include <stdlib.h>

int *create(int n);
void cal(int *array, int size);

int main()
{
    int *array, n, i;

    scanf("%d", &n);

    array = create(n);
    if (array == NULL)
        return -1; //这里的return是因为没有获得内存而直接结束程序。

    cal(array, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", *(array + i));
        if (i == n - 1)
            printf("\n");
        else
            printf(" ");
    }

    free(array);

    return 0;
}

/* 请在这里填写答案 */
int *create(int n)
{
    return (int *)malloc(sizeof(int) * n);
}
void cal(int *array, int size)
{
    int i, max, min, sum;
    float avg;
    scanf("%d", &array[0]);
    min = array[0];
    max = array[0];
    sum = array[0];
    for (i = 1; i < size; i++)
    {
        scanf("%d", &array[i]);
        if (max < array[i])
        {
            max = array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
        sum += array[i];
    }
    avg = (float)sum / size;
    printf("%d\n%.2f\n%d\n%d\n", sum, avg, max, min);
}
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

int *create(int n)
{
    int *p = malloc(sizeof(int) * n);
    return p;
}

void cal(int *array, int size)
{
    int *p = array;
    int sum = 0;
    float average;
    int max;
    int min;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = array;
    max = *p;
    min = *p;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *p;
        p++;
    }
    average = (float)sum / (float)size;
    p = array;
    for (int i = 0; i < size; i++)
    {
        if (max < *p)
        {
            max = *p;
        }
        p++;
    }
    p = array;
    for (int i = 0; i < size; i++)
    {
        if (min > *p)
        {
            min = *p;
        }
        p++;
    }
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", max);
    printf("%d\n", min);
}
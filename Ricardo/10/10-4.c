#include <stdio.h>
#include <stdlib.h>

void shift(int *array, int num, int size);

int main()
{
    int i, n, p, array[100];

    scanf(" %d%d", &n, &p); //测试用例保证0<p<n<=100
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]); //测试用例保证所有输入可以用整型存储

    shift(array, p, n); //向左移p位
    for (i = 0; i < n - 1; i++)
        printf("%d ", array[i]);
    printf("%d\n", array[i]);

    return 0;
}

void shift_1(int *array, int size)
{
    int temp = array[0];
    for (int i = 0; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[size - 1] = temp;
}

void shift(int *array, int num, int size)
{
    for (int i = 0; i < num; i++)
    {
        shift_1(array, size);
    }
}
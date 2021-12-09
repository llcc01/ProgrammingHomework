
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

/* 请在这里填写答案 */
void shift(int *array, int num, int size)
{
    int i, j, t[size];
    num %= size;
    for (i = num; i < size; i++)
    {
        t[i - num] = *(array + i);
    }
    for (i = size - num, j = 0; i < size; i++, j++)
    {
        t[i] = *(array + j);
    }
    for (i = 0; i < size; i++)
    {
        *(array + i) = t[i];
    }
}
#include <stdio.h>

//插入排序（升序）
//参数说明：数组，数组中已有元素个数
void InsertSort(int a[], int n);
void outputData(int data[], int elementCount);

int main()
{
    int n, i, num[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    InsertSort(num, n);
    return 0;
}

void swap(int a[], int n_position, int position)
//n_position表示插入的位置
{
    if (n_position < position)
    {
        int swap = a[position];
        for (int i = position - 1; i >= n_position; i--)
        {
            a[i + 1] = a[i];
        }
        a[n_position] = swap;
    }
    else
    {
        int swap = a[position];
        for (int i = position; i < n_position; i++)
        {
            a[i] = a[i + 1];
        }
        a[n_position] = swap;
    }
}

void outputData(int data[], int elementCount)
{
    for (int i = 0; i < elementCount; i++)
    {
        if (i == elementCount - 1)
        {
            printf("%d\n", data[elementCount - 1]);
            break;
        }
        printf("%d ", data[i]);
    }
}

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void InsertSort(int a[], int n)
{
    for (int i = 2; i <= n; i++)
    {
        bubbleSort(a, i);
        outputData(a, n);
    }
}

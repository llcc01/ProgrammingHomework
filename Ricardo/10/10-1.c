#include <stdio.h>

//冒泡排序
void bubbleSort(int a[], int n);

//输出数组中所有元素
void outputData(int data[], int elementCount);

int main()
{
    int n, i, num[10010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    bubbleSort(num, n);
    outputData(num, n);
    return 0;
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
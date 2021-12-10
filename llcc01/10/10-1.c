#include <stdio.h>

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

/* 请在这里填写答案 */
void bubbleSort(int a[], int n)
{
    int i, j, m;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
            }
        }
    }
}

void outputData(int data[], int elementCount)
{
    int i;
    printf("%d",data[0]);
    for(i=1;i<elementCount;i++)
    {
        printf(" %d",data[i]);
    }
    putchar('\n');

}

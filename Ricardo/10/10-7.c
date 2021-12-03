#include <stdio.h>
#define MAXN 2000000

int a[MAXN]; //这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。

int RecurBinarySearch(int a[], int key, int left, int right);

int main()
{
    int n, m, i, key;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", RecurBinarySearch(a, key, 0, n - 1));
        if (i != m - 1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}

int RecurBinarySearch(int a[], int key, int left, int right)
{
    if (left >= right)
    {
        if (a[left] == key)
        {
            return left;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid = left + (right - left) / 2;
        if (a[mid] > key)
        {
            RecurBinarySearch(a, key, left, mid - 1);
        }
        else if (a[mid] < key)
        {
            RecurBinarySearch(a, key, mid + 1, right);
        }
        else
        {
            return mid;
        }
    }
}
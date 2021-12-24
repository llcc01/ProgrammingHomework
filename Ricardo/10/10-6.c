#include <stdio.h>

int num[2000000]; //这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1
int BinarySearch(int a[], int n, int key);

int main()
{
    int n, m, i;
    int key;

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", BinarySearch(num, n, key));
        if (i != m - 1)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}

//left, right对应位置上的值均可能是我们查找的值，即在左闭右闭区间上
int BinarySearch(int a[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] > key)
        {
            right = mid - 1;
        }
        else if (a[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

//在左开右闭区间上
int BinarySearch(int a[], int n, int key)
{
    int left = 0;
    int right = n;
    while (left < right)
    {
        int mid = left + (right - mid) / 2;
        if (a[mid] > key)
        {
            right = mid;
        }
        else if (a[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
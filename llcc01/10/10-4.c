#include <stdio.h>

//插入排序（升序）
//参数说明：数组，数组中已有元素个数
void InsertSort(int a[], int n);

int main()
{
    int n, i, num[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    InsertSort(num, n);
    return 0;
}

/* 请在这里填写答案 */
void InsertSort(int a[],int n)
{
    int r,t,i,f;
    for(r=0;r<n-1;r++)
    {
        t = a[r+1];//当前操作数
        for(i=r;i>=0;i--)
        {
            if(a[i]<t)
            {
                break;
            }
            a[i+1]=a[i];
        }
        a[i+1]=t;
        printf("%d",a[0]);
        for (i = 1; i < n; i++)
        {
            printf(" %d",a[i]);
        }
        putchar('\n');
    }
}
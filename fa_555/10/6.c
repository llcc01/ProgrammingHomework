#include <stdio.h>

//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1
int BinarySearch(int a[], int n, int key);

int num[2000000];
// 你要么教教开栈，要么教教全局变量区，要么别开这么大数据范围，，
// 组这题的多少...

int main() {
  int n, m, i;
  int key;

  scanf("%d%d", &n, &m);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);

  for (i = 0; i < m; i++) {
    scanf("%d", &key);
    printf("%d", BinarySearch(num, n, key));
    if (i != m - 1)
      printf(" ");
    else
      printf("\n");
  }
  return 0;
}

/* 请在这里填写答案 */
int BinarySearch(int a[], int n, int key) {
  int ans = 0;
  for (int l = 0, r = n - 1, mid; l <= r; ) {
    mid = (l + r) >> 1;
    if (key >= a[mid]) ans = mid, l = mid + 1;
    else r = mid - 1;
  }
  return a[ans] == key ? ans : -1;
}


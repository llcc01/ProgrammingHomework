#include <stdio.h>

//插入排序（升序）
//参数说明：数组，数组中已有元素个数
void InsertSort(int a[], int n);

int main() {
  int n, i, num[1000];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);
  InsertSort(num, n);
  return 0;
}

/* 请在这里填写答案 */
void swap(int *p, int *q) {
  int t = *p;
  *p = *q;
  *q = t;
}

void InsertSort(int a[], int n) {
  // 现场独立发明插入排序是吧😅
  for (int i = 1; i < n; ++i) {
    for (int j = 0; j < i; ++j)
      if (a[j] > a[i]) {
        for (int k = i; k > j; --k)
          swap(a + k, a + k - 1);
        break;
      }
    for (int j = 0; j < n; ++j)
      printf("%d%c", a[j], " \n"[j + 1 == n]);
  }
}
#include <stdio.h>

void bubbleSort(int a[], int n);

//输出数组中所有元素
void outputData(int data[], int elementCount);

int main() {
  int n, i, num[10010];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);
  bubbleSort(num, n);
  outputData(num, n);
  return 0;
}

/* 请在这里填写答案 */
void swap(int *p, int *q) {
  int t = *p;
  *p = *q;
  *q = t;
}

void bubbleSort(int a[], int n) {
  for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
      if (a[i] > a[j])
        swap(a + i, a + j);
}

void outputData(int data[], int elementCount) {
  for (int i = 0; i < elementCount; ++i)
    printf("%d%c", data[i], " \n"[i + 1 == elementCount]);
}


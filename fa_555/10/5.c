#include <stdio.h>

//选择排序（升序）
//参数说明：数组，数组中已有元素个数
void selectSort(int data[], int elementCount);

//函数功能：找数组中的最小值元素，并返回其下标
//参数说明：数组名，查找起始位置下标，查找~~终止位置下标~~尾指针位置
// 这什么垃圾参数设计，，一边从 0 开始用一边传终止位置下标
// 头回见从 0 开始还用闭区间的
int findMin(int data[], int startLoc, int endLoc);

//输出数组中所有元素
//参数说明：数组，数组中已有元素个数
void outputData(int data[], int elementCount);

int main() {
  int n, i, num[1010];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);
  selectSort(num, n);
  return 0;
}

/* 请在这里填写答案 */
void swap(int *p, int *q) {
  int t = *p;
  *p = *q;
  *q = t;
}

void selectSort(int data[], int elementCount) {
  for (int i = 0; i < elementCount - 1; ++i) {
    int j = findMin(data, i, elementCount);
    if (i != j)
      swap(data + i, data + j);
    outputData(data, elementCount);
  }
}

int findMin(int data[], int startLoc, int endLoc) {
  data += startLoc;
  endLoc -= startLoc;
  int mn = *data, mxp = 0;
  for (int i = 1; i < endLoc; ++i)
    if (data[i] < mn)
      mn = data[i], mxp = i;
  return startLoc + mxp;
}

void outputData(int data[], int elementCount) {
  for (int i = 0; i < elementCount; ++i)
    printf("%d%c", data[i], " \n"[i + 1 == elementCount]);
}
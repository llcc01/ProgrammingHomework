#include <stdio.h>

void shift(int *array, int num, int size);

int main() {
  int i, n, p, array[100];

  scanf(" %d%d", &n, &p); //测试用例保证0<p<n<=100
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]); //测试用例保证所有输入可以用整型存储

  shift(array, p, n); //向左移p位
  for (i = 0; i < n - 1; i++)
    printf("%d ", array[i]);
  printf("%d\n", array[i]);

  return 0;
}

/* 请在这里填写答案 */
void shift(int *array, int num, int size) {
  // 这题要么 O(n) 额外空间，要么 O(n^2) 时间
  // 你不给数据范围我咋做啊，，
  // 我先写 O(n^2) 时间的了，，
  for (num %= size; num; --num) {
    int t = array[1];
    for (int i = 1; i < size; ++i)
      array[i] = array[(i + 1) % size];
    *array = t;
  }
}
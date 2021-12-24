#include <stdio.h>

int fuc(int n);

int main() {
  int n;

  scanf("%d", &n);
  printf("%d\n", fuc(n));

  return 0;
}

/* 请在这里填写答案 */
int fuc(int n) {
  return n ? fuc(n - 1) + n * n * n : n;
}
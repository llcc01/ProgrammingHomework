#include <stdio.h>

int findMax(int n);

int main() {
  int n;

  scanf("%d", &n);
  printf("%d\n", findMax(n));

  return 0;
}

/* 请在这里填写答案 */
int max(int a, int b) {
  return a > b ? a : b;
}

int findMax(int n) {
  int x;
  scanf("%d", &x);
  return n == 1 ? x : max(x, findMax(n - 1));
}
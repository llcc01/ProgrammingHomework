#include <stdio.h>

int GCD(int a, int b);

int main() {
  int a, b;

  scanf("%d%d", &a, &b);
  printf("%d\n", GCD(a, b));

  return 0;
}

/* 请在这里填写答案 */
int GCD(int a, int b) {
  return b ? GCD(b, a % b) : a;
}
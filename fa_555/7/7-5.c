#include <stdio.h>

int mypow(int, int);

int main() {
  int x, n;

  scanf("%d%d", &x, &n);
  printf("%d\n", mypow(x, n));

  return 0;
}

/* 请在这里填写答案 */
int mypow(int b, int p) {
  int s = 1;
  for (; p; p >>= 1, b = b * b)
    if (p & 1) s = s * b;
  return s;
}
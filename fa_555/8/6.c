#include <stdio.h>

int evaluation(int n, int a);

int main() {
  int n, a;

  scanf("%d%d", &n, &a);
  printf("%d\n", evaluation(n, a));

  return 0;
}

/* 请在这里填写答案 */
int Pow(int b, int p) {
  int s = 1;
  for (; p; p >>= 1, b *= b)
    if (p & 1) s *= b;
  return s;
}

int evaluation(int n, int a) {
  if (a <= 1) return (n + 1) * a;
  if (n == -1) return 1;
  return evaluation(n - 1, a) + Pow(a, n + 1);
}
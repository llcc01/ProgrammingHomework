#include <stdio.h>

int sq(int x) {
  return x * x;
}

int check(int x, int m) {
  // 除以 m 所得商是啥意思
  // 直接地板除吗

  int q = x / m, sum = 0; // sum of square
  do sum += sq(x % 10); while (x /= 10);
  return q == sum;
}

int main() {
  int N, M;

  scanf("%d%d", &N, &M);
  for (int i = 1; i <= N; ++i)
    if (check(i, M))
      printf("%d\n", i);

  return 0;
}


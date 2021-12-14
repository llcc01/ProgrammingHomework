#include <stdio.h>

int max(int m, int n) {
  return m > n ? m : n;
}

int main() {
  int N, s = 0, b[1003];
  scanf("%d", &N);
  for (int i = 1; i <= N; ++i)
    scanf("%d", b + i);
  for (int i = N; i; --i)
    b[i] -= b[i - 1];
  for (int i = 1, now = 0; i <= N; ++i) {
    if (b[i])
      now = 0;
    else
      ++now;
    s = max(s, now);
  }
  printf("%d\n", s + 1);
  return 0;
}


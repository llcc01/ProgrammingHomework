#include <stdio.h>

int main() {
  int N, s = 0, z[23];
  scanf("%d", &N);
  for (int i = 1; i <= N * 2; ++i)
    scanf("%d", z + i);
  for (int i = 1; i <= N; ++i)
    s += z[i] * z[i + N];
  printf("%d\n", s);
  return 0;
}
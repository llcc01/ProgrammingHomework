#include <stdio.h>

int main() {
  int N, M = 0, z[203], s[203];
  scanf("%d", &N);
  for (int i = 1; i <= N; ++i)
    scanf("%d", z + i);
  for (int i = 1; i <= N; ++i)
    if (z[i] % 2 == 0)
      s[++M] = z[i];
  for (int i = 1; i <= N; ++i)
    if (z[i] % 2 == 1)
      s[++M] = z[i];
  for (int i = 1; i <= M; ++i)
    printf("%d%c", s[i], " \n"[i == N]);
  return 0;
}


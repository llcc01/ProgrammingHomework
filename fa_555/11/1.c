#include <stdio.h>

int main() {
  int N, M, z[103][103], zT[103][103];
  scanf("%d%d", &N, &M);
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= M; ++j)
      scanf("%d", &z[i][j]);

  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= M; ++j)
      zT[j][i] = z[i][j];

  for (int i = 1; i <= M; ++i)
    for (int j = 1; j <= N; ++j)
      printf("%d%c", zT[i][j], " \n"[j == N]);
  return 0;
}


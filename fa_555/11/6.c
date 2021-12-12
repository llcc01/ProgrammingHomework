#include <stdio.h>

const int dx[] = {1, -1, 0, 1}, dy[] = {0, 1, 1, -1};

int valid(int x, int y, int N) {
  return x > 0 && y > 0 && x <= N && y <= N;
}

int main() {
  int N, z[103][103] = {};

  scanf("%d", &N);
  z[1][1] = 1;
  for (int i = 2, x = 1, y = 1, k = 0, nx, ny; i <= N * N; ++i) {
    nx = x + dx[k], ny = y + dy[k];
    while (!valid(nx, ny, N) || z[nx][ny])
      k = (k + 1) % 4, nx = x + dx[k], ny = y + dy[k];
    z[x = nx][y = ny] = i;

    fprintf(stderr, "%d %d %d\n", i, x, y);
    if (k % 2 == 0)
      k = (k + 1) % 4;
  }
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= N; ++j)
      printf("%d%c", z[i][j], " \n"[j == N]);
  return 0;
}

#include <stdio.h>

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int valid(int x, int y, int N, int M) {
  return x > 0 && y > 0 && x <= N && y <= M;
}

int main() {
  int N, M, x, y, ans = 0, z[13][13];

  scanf("%d%d", &N, &M);
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= M; ++j)
      scanf("%d", &z[i][j]);
  scanf("%d%d", &x, &y);

  for (int k = 0, nx, ny; k < 8; ++k) {
    nx = x + dx[k], ny = y + dy[k];
    if (valid(nx, ny, N, M))
      ans += z[nx][ny];
  }
  printf("%d\n", ans);
  return 0;
}


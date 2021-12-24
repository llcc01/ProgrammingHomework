#include <stdio.h>

int main() {
  int N, M, z[103][103], rmx[103], cmn[103];

  scanf("%d%d", &N, &M);
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= M; ++j)
      scanf("%d", &z[i][j]);

  for (int i = 1; i <= N; ++i) {
    rmx[i] = 1;
    for (int j = 2; j <= M; ++j)
      if (z[i][j] > z[i][rmx[i]])
        rmx[i] = j;
  }
  for (int j = 1; j <= M; ++j) {
    cmn[j] = 1;
    for (int i = 2; i <= N; ++i)
      if (z[i][j] < z[cmn[j]][j])
        cmn[j] = i;
  }

  for (int i = 1; i <= N; ++i)
    if (cmn[rmx[i]] == i) {
      printf(
        "The saddle point is (%d,%d)=%d.\n",
        i - 1, rmx[i] - 1, z[i][rmx[i]]
      );
      return 0;
    }
  puts("There is no saddle point in the matrix.");
  return 0;
}


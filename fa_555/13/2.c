#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, M;
  scanf("%d%d", &N, &M);
  int **z = (int **)calloc(N, sizeof (int *));
  assert(z);
  for (int i = 0; i < N; ++i) {
    z[i] = (int *)calloc(M, sizeof (int *));
    assert(z[i]);
  }

  for (int i = 0; i < N; ++i)
    for (int j = 0; j < M; ++j)
      scanf("%d", &z[i][j]);

  for (int i = 0; i < N; ++i)
    for (int j = 0; j < M; ++j)
      z[i][j] = -10 * z[i][j];

  for (int i = 0; i < N; ++i)
    for (int j = 0; j < M; ++j)
      printf("%d%c", z[i][j], " \n"[j == M - 1]);

  for(int i = 0; i < N; ++i)
    free(z[i]);
  free(z);
  return 0;
}


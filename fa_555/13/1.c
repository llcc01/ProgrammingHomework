#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;
  scanf("%d", &N);
  int *z = (int *)calloc(N, sizeof (int));
  assert(z);
  for (int i = 0; i < N; ++i)
    scanf("%d", z + i);
  
  for (int i = 0; i < N; ++i)
    z[i] = -10 * z[i];

  for (int i = 0; i < N; ++i)
    printf("%d%c", z[i], " \n"[i == N - 1]);

  free(z);
  return 0;
}


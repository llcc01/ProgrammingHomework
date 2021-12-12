#include <stdlib.h>
#include <stdio.h>

void swap(int *p, int *q) {
  int t = *p;
  *p = *q;
  *q = t;
}

int main() {
  int N, z[103][103], s[103], to[103];

  scanf("%d", &N);
  for (int i = 1; i <= N; ++i) {
    to[i] = i;
    for (int j = 1; j <= N; ++j) {
      scanf("%d", &z[i][j]);
      s[i] += z[i][j];
    }
  }

  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= N - i; ++j)
      if (s[j] > s[j + 1])
        swap(s + j, s + j + 1), swap(to + j, to + j + 1);

  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= N; ++j)
      printf("%d%c", z[to[i]][j], " \n"[j == N]);
  return 0;
}


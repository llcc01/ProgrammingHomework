#include <stdio.h>

int main() {
  int N, M, a[1003], b[1003];
  for (N = 0; ; ++N) {
    scanf("%d", a + N);
    if (a[N] == -1) break;
  }
  for (M = 0; ; ++M) {
    scanf("%d", b + M);
    if (b[M] == -1) break;
  }
  for (int i = 0; i <= N - M; ++i) {
    for (int j = 0; j < M; ++j) {
      if (a[i + j] != b[j])
        break;
      if (j == M - 1) {
        puts("ListB is the sub sequence of ListA.");
        return 0;
      }
    }
  }
  puts("ListB is not the sub sequence of ListA.");
  return 0;
}


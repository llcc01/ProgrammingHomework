#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main() {
  int N, a[13];
  scanf("%d", &N);
  for (int i = 0; i < N; ++i)
    scanf("%d", a + i);
  for (int i = 0, b; i < N; ++i) {
    scanf("%d", &b);
    swap(a + i, a + b);
  }
  for (int i = 1; i <= N; ++i)
    printf("%d%c", a[i - 1], " \n"[i == N]);
  return 0;
}


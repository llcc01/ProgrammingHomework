#include <stdio.h>

int main() {
  int N;
  long long s = 0;
  scanf("%d", &N);
  for (int i = 1, x; i <= N; ++i) {
    scanf("%d", &x);
    s += x;
  }
  printf("%.2f\n", 1. * s / N);
  return 0;
}
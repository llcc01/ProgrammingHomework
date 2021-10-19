#include <stdio.h>

int main() {
  int N, sum, mx, mn;

  scanf("%d%d", &N, &sum);
  mx = mn = sum;

  for (int i = 2, x; i <= N; ++i) {
    scanf("%d", &x);
    sum += x;
    mx = x > mx ? x : mx;
    mn = x < mn ? x : mn;
  }

  printf("%d %d %d\n", sum, mx, mn);
  return 0;
}
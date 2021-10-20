#include <stdio.h>

int main() {
  int N, term, ans;

  scanf("%d", &N);
  term = N / 21;

  ans = 21 * term * (term + 1) / 2;
  ans *= ans;

  printf("%d\n", ans);
  return 0;
}


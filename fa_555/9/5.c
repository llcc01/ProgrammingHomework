#include <stdio.h>

const int d[7] = {100, 50, 20, 10, 5, 2, 1};

int divide(int x, int d) {
  int ans = x / d;
  if (!ans) return 0;

  printf("%d:%d\n", d, ans);
  return ans * d;
}

int main() {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < 7; ++i)
    N -= divide(N, d[i]);
  return 0;
}


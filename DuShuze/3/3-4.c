#include <stdio.h>

typedef long long int64;

int64 A(int n) {
  int64 ans = 0;

  for (int i = 1; i <= n; ++i)
    ans += 1ll * i * (i - 1) * (i - 2);

  return ans;
}

int main() {
  int N;
  int64 ans = 0;

  scanf("%d", &N);
  for (int i = 1; i <= N; ++i)
    ans += A(i);

  printf("%lld\n", ans);
  return 0;
}


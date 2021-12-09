#include <math.h>
#include <stdio.h>

int main() {
  int M, N, ans = 0;
  scanf("%d%d", &M, &N);
  for (int x = M; x <= N; ++x)
    for (int y = x; y <= N; ++y) {
      long long a, b, z, s;
      a = 1ll * x * x * y * y;
      b = x * x + y * y;
      if (a % b != 0) continue;
      s = a / b;
      z = sqrt(s);
      if (z * z != s && (z + 1) * (z + 1) != s) continue;
      if (z >= M && z <= N) {
        // fprintf(stderr, "### %lld %lld\n", s, z);
        // fprintf(stderr, "$$$ %d %d %lld\n", x, y, z);
        ++ans;
      }
    }
  printf("%d\n", ans);
  return 0;
}
#include <stdio.h>

int gcd(int m, int n) {
  return n ? gcd(n, m % n) : m;
}

int main() {
  int m, n, g;

  scanf("%d%d", &m, &n);
  g = gcd(m, n);
  printf("%d %lld\n", g, 1ll * m * n / g);
  return 0;
}


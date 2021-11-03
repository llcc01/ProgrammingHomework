/*
 * \begin{cases}
 * x \equiv 1 \pmod 5 \\
 * x \equiv 5 \pmod 6 \\
 * x \equiv 6 \pmod 7 \\
 * x \equiv 10 \pmod{11} \\
 * \end{cases}
 */

#include<cstdio>

using ll = long long;

inline ll Mod(ll b, ll m) {
  return (b % m + m) % m;
}

inline ll Mul(int b, int p, int m) {
  ll s = 0;
  for (; p; p >>= 1, b = (b << 1) % m)
    if (p & 1) s = (s + b) % m;
  return s;
}

void exgcd(ll a, ll b, ll &g, ll &x, ll &y) {
  if (!b) g = a, x = 1, y = 0;
  else exgcd(b, a % b, g, y, x), y -= x * (a / b);
}

ll m[5], r[5];

ll EXCRT(int N) {
  ll M = 1, ans = 0, a, b, c, g, x, y;
  for (int i = 1; i <= N; ++i) {
    a = M, b = m[i], c = Mod(r[i] - ans, b);
    exgcd(a, b, g, x, y);
    if (c % g) return -1;
    ans += Mul(x, c / g, b / g) * M;
    ans = Mod(ans, M *= b / g);
  }
  return ans;
}

int main() {
  constexpr int N = 4;

  m[1] = 5, r[1] = 1;
  m[2] = 6, r[2] = 5;
  m[3] = 7, r[3] = 6;
  m[4] = 11, r[4] = 10;
  printf("%lld\n", EXCRT(N));
  return 0;
}


#include<stdio.h>

int Pow(int b, int p, int m) {
  int s = 1 % m;
  b %= m;
  for(; p; p >>= 1, b = 1ll * b * b % m)
    if(p & 1) s = 1ll * s * b % m;
  return s;
}

int MR(int x, int b) {
  if(Pow(b, x - 1, x) != 1) return 0;
  int k = x - 1;
  while(!(k & 1)) {
    k >>= 1;
    int d = Pow(b, k, x);
    if(d == x - 1) return 1;
    if(d != 1) return 0;
  }
  return 1;
}

int MR(int x) {
  if(x == 2 || x == 3 || x == 7 || x == 61 || x == 24251) return 1;
  return MR(x, 2) && MR(x, 3) && MR(x, 7) && MR(x, 61) && MR(x, 24251);
}

int main() {
  int T;
  scanf("%d", &T);
  for (int x, ans; T; --T) {
    ans = 0;

    for (; ; ) {
      scanf("%d", &x);
      if (!~x) break;
      ans += MR(x);
    }

    printf("%d\n", ans);
  }
  return 0;
}


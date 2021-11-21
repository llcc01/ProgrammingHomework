#include <stdio.h>

long long gcd(long long m, long long n) {
  return n ? gcd(n, m % n) : m;
}

int main() {
  // 坏了，竞赛白学了，卡特兰数递推式忘了，按题目给的式子算了
  int N;
  long long a = 1, b = 1, g = 1;

  scanf("%d", &N);
  for (int i = 2; i <= N; ++i) {
    a *= N + i;
    b *= i;
    if ((g = gcd(a, b)) != 1)
      a /= g, b /= g;
  }
  // assert(a % b == 0);
  printf("%lld\n", a / b);
  return 0;
}


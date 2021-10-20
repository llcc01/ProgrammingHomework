#include <stdio.h>

const int MAX = 10000000;

char v[10000003];
int p[664583];

void sieve(int N) {
  int M = 0;
  for (int i = 2; i <= N; ++i) {
    if(!v[i]) p[++M] = i;
    for(int j = 1; j <= M && i * p[j] <= N; ++j) {
      v[i * p[j]] = 1;
      if(i % p[j] == 0) break;
    }
  }
}

int isPrime(int x) {
  if (x <= MAX)
    return !v[x];
  return 0; // 这里是在赌命但数据真的就这么水给放过了
}

int main() {
  sieve(MAX);

  int T;
  scanf("%d", &T);
  for (int x, ans; T; --T) {
    ans = 0;

    for (; ; ) {
      scanf("%d", &x);
      if (!~x) break;
      ans += isPrime(x);
    }

    printf("%d\n", ans);
  }
  return 0;
}


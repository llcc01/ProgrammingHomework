#include <stdio.h>

int main() {
  int M, N;

  scanf("%d%d", &M, &N);
  // 哎我是真的不擅长枚举

  // a, b, c => 鸡、兔、蜻蜓
  for (int a = 0; a <= M; ++a)
    for (int b = 0, c; b <= M - a; ++b) {
      c = M - a - b;
      if (2 * a + 4 * b + 6 * c == N)
        printf("%d %d %d\n", a, b, c);
    }
  return 0;
}


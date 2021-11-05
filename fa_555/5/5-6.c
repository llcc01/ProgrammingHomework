#include <stdio.h>

// 我突然意识到这题是不是完全背包求具体方案啊（
// ↑ 不是
// 麻
int main() {
  int M, N;

  scanf("%d%d", &M, &N);
  N -= M;

  // a, b, c => 2题、3题、4题
  for (int a = 0; a <= M; ++a)
    for (int b = 0, c; b <= M - a; ++b) {
      c = N - a - 2 * b;
      if (c < 0) break;
      if (c % 3 == 0 && a + b + c / 3 <= M)
        printf("%d %d %d\n", a, b, c / 3);
    }
  return 0;
}


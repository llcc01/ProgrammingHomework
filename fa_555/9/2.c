#include <stdio.h>

int main() {
  int N, M, z[1003];
  
  scanf("%d", &N);
  for (int i = 1; i <= N; ++i)
    scanf("%d", z + i);
  scanf("%d", &M);

  for (int i = 1, x, g; i <= M; ++i) {
    scanf("%d", &x);
    g = 0;
    for (int j = 1; !g && j <= N; ++j)
      if (z[j] == x) {
        if (j != 1)
          ++g, printf("%d", z[j - 1]);
        if (j != N) {
          if (g) putchar(' ');
          ++g, printf("%d", z[j + 1]);
        }
      }
    if (!g)
      printf("NULL");
    puts("");
  }
  return 0;
}


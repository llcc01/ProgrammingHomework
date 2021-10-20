#include <stdio.h>

int main() {
  int N;

  scanf("%d", &N);

  for (int i = 1; i <= N; ++i) {
    for (int j = N - i; j; --j)
      putchar(' ');
    for (int j = (i << 1) - 1; j; --j)
      putchar('*');
    putchar('\n');
  }

  for (int i = N - 1; i; --i) {
    for (int j = N - i; j; --j)
      putchar(' ');
    for (int j = (i << 1) - 1; j; --j)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
#include <stdio.h>

void printBlankRow(int x) {
  for (int i = 1; i <= x; ++i)
    putchar('*');
  putchar('\n');
}

void printNonBlankRow(int c, int n) {
  putchar('*');
  for (int i = 1; i <= c; ++i) {
    for (int j = 1; j <= n; ++j)
      putchar('.');
    putchar('*');
  }
  putchar('\n');
}

int main() {
  int L, C, N, M;
  scanf("%d%d%d", &L, &C, &N);
  M = (N + 1) * C + 1;
  printBlankRow(M);
  for (int i = 1; i <= L; ++i) {
    for (int j = 1; j <= 3; ++j)
      printNonBlankRow(C, N);
    printBlankRow(M);
  }
  return 0;
}
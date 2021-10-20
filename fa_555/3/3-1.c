#include <stdio.h>

int Pow(int b, int p) {
  int s = 1;
  for (; p; p >>= 1, b = b * b)
    if (p & 1) s = s * b;
  return s;
}

int main() {
  int b, p;

  scanf("%d%d", &b, &p);
  printf("%d\n", Pow(b, p));
  return 0;
}
#include <stdio.h>

void output(int x) {
  if (x > 3 || x < -3)
    puts("error");
  else if (x > 0)
    puts("A win");
  else if (x < 0)
    puts("B win");
  else
    puts("error");
}

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A > 23 || B > 23)
    output(0);
  else if (A < 0 || B < 0)
    output(0);
  else
    output(A - B);
  return 0;
}

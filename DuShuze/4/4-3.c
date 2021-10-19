#include <stdio.h>

int main() {
  int x;

  scanf("%d", &x);
  if (x < 0 || x > 100)
    puts("The score is out of range!");
  else if (x >= 90)
    puts("A");
  else if (x >= 80)
    puts("B");
  else if (x >= 70)
    puts("C");
  else if (x >= 60)
    puts("D");
  else
    puts("E");

  return 0;
}
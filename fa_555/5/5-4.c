#include <stdio.h>

int check(int x) {
  switch (x % 10) {
    // case 0 这个虽然 0 * 0 == 0 但是是可以证明一定不合法的，吗？
    case 0: case 2: case 3: case 4: case 7: case 8: case 9: return 0;
  }

  if (x == x * x)
    return 1;

  for (int sqr = x * x, mask = 10; sqr * 10 >= mask; mask *= 10)
    if (sqr % mask == x)
      return 1;

  return 0;
}

int main() {
  int x;

  scanf("%d", &x);
  if (x < 1 || x > 10000)
    printf("%d out of range\n", x);
  else
    puts(check(x) ? "Yes" : "No");

  return 0;
}


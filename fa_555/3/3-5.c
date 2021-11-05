#include <stdio.h>

int main() {
  int tot = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;

  for (int x; ; ++tot) {
    scanf("%d", &x);
    if (!x) break;

    if (!(x % 3) && x % 5 && x % 7)
      ++cnt3;
    else if (x % 3 && !(x % 5) && x % 7)
      ++cnt5;
    else if (x % 3 && x % 5 && !(x % 7))
      ++cnt7;
  }

  printf("%.2f%%\n%.2f%%\n%.2f%%\n",
    100. * cnt3 / tot,
    100. * cnt5 / tot,
    100. * cnt7 / tot
  );
  return 0;
}
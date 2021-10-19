#include <stdio.h>

int main() {
  int T;

  scanf("%d", &T);
  for (int N, tot; T; --T) {
    tot = 0;
    scanf("%d", &N);

    for (int i = 1, x; i <= N; ++i) {
      scanf("%d", &x);
      tot += x;
    }

    if (tot >= 400)
      tot -= 160;
    else if (tot >= 300)
      tot -= 110;
    else if (tot >= 200)
      tot -= 70;
    else if (tot >= 100)
      tot -= 30;

    printf("%d\n", tot);
  }
  return 0;
}
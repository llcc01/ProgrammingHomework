// 我超，中国剩余定理！
// 但是我先正常写一遍，过会再粘板子吧（

#include <stdio.h>

int main() {
  // 哎这题枚举怎么写比较帅啊（
  // 5 * 6 * 7 * 11 = 2310

  int N;
  for (scanf("%d", &N); ; ++N)
    if (N % 5 == 1 && N % 6 == 5 && N % 7 == 6 && N % 11 == 10) {
      printf("%d\n", N);
      break;
    }
  return 0;
}
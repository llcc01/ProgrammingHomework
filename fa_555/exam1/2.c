#include <stdio.h>

int isLeapYear(int y) {
  // 我还真不知道 C 语言没有 bool 的话逻辑运算返回什么
  // 所以这么写
  return !!((y % 100 != 0 && y % 4 == 0) || y % 400 == 0);
}

int main() {
  int N;
  scanf("%d", &N);
  for (int y, ans; N; --N) {
    ans = 0;
    for (; ; ) {
      scanf("%d", &y);
      if (y == -1) break;
      ans += isLeapYear(y);
    }
    printf("%d\n", ans);
  }
  return 0;
}
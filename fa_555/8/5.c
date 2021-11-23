#include <stdio.h>

int countBinary(int);

int main() {
  int n;

  scanf("%d", &n);
  printf("%d\n", countBinary(n));

  return 0;
}

/* 请在这里填写答案 */

/* 用 __builtin_clz 未免有点欺负人
 * int countBinary(int n) {
 *  return n ? 32 - __builtin_clz(n) : 1;
 * }
 */

/* 用非递归未免也不符合题目要求
 * int countBinary(int n) {
 *   int ans = 0;
 *   do ++ans; while (n >>= 1);
 *   return ans;
 * }
 */

int countBinary(int n) {
  return n <= 1 ? 1 : 1 + countBinary(n >> 1);
}
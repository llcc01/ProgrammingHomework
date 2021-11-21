#include <stdio.h>

int reverse(int n);

int main() {
  int n;

  scanf("%d", &n);
  printf("%d\n", reverse(n));

  return 0;
}

/* 请在这里填写答案 */

int reverse(int n) {
  int ans = 0;
  do ans = ans * 10 + n % 10; while (n /= 10);
  return ans;
}
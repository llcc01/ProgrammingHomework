#include <stdio.h>

int reverseNum(int);

int main() {
  int num;

  scanf("%d", &num);
  printf("The reverse form of number %d is %d.\n", num, reverseNum(num));

  return 0;
}

/* 请在这里填写答案 */

// 唉算了我好好写吧 不整花活了

int reverseNum(int x) {
  int ans = 0;
  do ans = ans * 10 + x % 10; while (x /= 10);
  return ans;
}
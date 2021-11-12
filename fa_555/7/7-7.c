#include <stdio.h>

//判断一个数是否为完全数的函数
int isPerfect(int);

//打印完全数的函数
void printPerfect(int);

int main() {
  int i, a, b, count;

  scanf("%d%d", &a, &b);
  count = 0; // a,b两数间完全数的数量，初始化为0
  for (i = a; i <= b; i++) {
    if (isPerfect(i)) //如果是完全数
    {
      printPerfect(i); //打印该完全数
      count++;         //计数器加1
    }
  }
  printf("The total number is %d.\n", count); //输出a,b两数间完全数的数量
  return 0;
}
/* 请在这里填写答案 */

// O(b sqrt b)，其实不贪这个 2 的常数也过了

int cnt1, cnt2, d1[133], d2[133];

int isPerfect(int x) {
  cnt1 = cnt2 = 0;
  int sum = 0;
  for (int i = 1; i * i <= x; ++i)
    if (x % i == 0) {
      sum += i, d1[++cnt1] = i;
      if (i * i != x)
        sum += x / i, d2[++cnt2] = x / i;
    }
  return sum - x == x;
}

// 什么神仙英语
void printPerfect(int x) {
  printf("%d=", x);

  for (int i = 1; i <= cnt1; ++i)
    printf("%d+", d1[i]);
  for (int i = cnt2; i > 1; --i)
    printf("%d%c", d2[i], "+\n"[i == 2]);
}
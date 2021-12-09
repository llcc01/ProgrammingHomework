#include <stdio.h>

void printFactor(int, int);

int main() {
  int a, b, i;

  scanf("%d%d", &a, &b);
  for (i = a; i <= b; i++)
    printFactor(i, 1);

  return 0;
}

/* 请在这里填写答案 */
// 整不明白这题是干啥想不开要递归
// 你要出递归题就整点搜索啥的大家都开心
// C 又不是个函数式语言你逼着别人用递归干什么
void printFactor(int n, int u) {
  if (u == 1) {
    printf("%d=", n);

    if (n == 1) {
      printf("1\n");
      return;
    }
  }

  for (int v = u == 1 ? 2 : u; v <= n; ++v)
    if (n % v == 0) {
      printf("%d", v);
      if (n / v != 1) {
        putchar('*');
        printFactor(n / v, v);
      }
      break;
    }

  if (u == 1)
    puts("");
}
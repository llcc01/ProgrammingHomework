// 这题用 C++ 是不是当作 bitset 读进去再输出就完事了（
// 既然不能用轮子那我就摆烂了

#include <stdio.h>

int num[13], *p = num, ans;

int main() {
  for (; scanf("%1d", ++p) != EOF;) {}
  // num[1..p]

  int N = p - 1 - num;
  for (int i = N; i; --i)
    ans |= num[i] << (N - i);

  printf("%d\n", ans);
  return 0;
}
#include <stdio.h>

int convert(int n);

int main() {
  int n;

  scanf("%d", &n);

  printf("%d\n", convert(n));
  return 0;
}

/* 请在这里填写答案 */

/*
 * int convert(int n) {
 *  char s[13];
 *  sprintf(s, "%d", n);
 *  return strtol(s, NULL, 2);
 * }
 */

int convert(int n) {
  return n <= 1 ? n : n % 10 + convert(n / 10) * 2;
}
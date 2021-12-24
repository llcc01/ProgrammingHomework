#include <stdio.h>

#define MAXLEN 110

int isPrime(int n); //判断一个整数是否是质数，是则返回1，否则返回0

int getResult(char word[]);

int main() {
  char word[MAXLEN];

  scanf("%s", word);
  printf("%d\n", getResult(word));

  return 0;
}

/*
 * int isPrime(int n) {
 *   return 1; // debug
 * }
 */

/* 请在这里填写答案 */
int getResult(char word[]) {
  int cnt[27] = {};
  for (char *p = word; *p; ++p)
    ++cnt[*p & 31];
  int mx = 0, mn = 0x3f3f3f3f;
  for (int i = 1; i <= 26; ++i)
    if (cnt[i]) {
      if (cnt[i] > mx) mx = cnt[i];
      if (cnt[i] < mn) mn = cnt[i];
    }
  return isPrime(mx - mn) ? mx - mn : -1;
}


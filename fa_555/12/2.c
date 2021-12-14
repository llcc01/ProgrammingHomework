#include <stdio.h>

const char d[] = "10X98765432";

const int coef[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2,};

int valid(const char *s) {
  int chksum = 0;
  for (int i = 0; i < 17; ++i)
    chksum += coef[i] * (s[i] & 15);
  return d[chksum % 11] == s[17];
}

int main() {
  int T;
  char s[23];

  for (scanf("%d", &T); T; --T) {
    scanf("%s", s);
    puts(valid(s) ? "right" : "wrong");
  }

  return 0;
}


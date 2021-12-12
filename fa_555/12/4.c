#include <stdio.h>

char s[13][33];

int main() {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; ++i)
    scanf(" %[^\n]%*c", s[i]);
  for (int i = 1, x; i <= N; ++i) {
    scanf("%d", &x);
    puts(s[x]);
  }
  return 0;
}


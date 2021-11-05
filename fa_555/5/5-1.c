#include <stdio.h>
#include <string.h>

int main() {
  char s[15];

  scanf("%s", s + 1);
  
  int l = strlen(s + 1);

  for (int i = 1; i <= l; ++i) {
    putchar(s[i]);
    putchar(" \n"[i == l]);
  }
  return 0;
}


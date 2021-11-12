#include <stdio.h>
#include <stdlib.h>

char s[13], *p;

int main() {
  scanf("%s", s);
  printf("%ld\n", strtol(s, &p, 2));
  return 0;
}

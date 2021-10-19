#include <ctype.h>
#include <stdio.h>

char s[103];
int a, b, c, d;

int main() {

  fgets(s, 103, stdin);
  for (char *p = s; *p && *p != '\n'; ++p) {
    if (isalpha(*p)) ++a;
    else if (isblank(*p)) ++b;
    else if (isdigit(*p)) ++c;
    else ++d;
  }
  printf("%d %d %d %d\n", a, b, c, d);
  return 0;
}
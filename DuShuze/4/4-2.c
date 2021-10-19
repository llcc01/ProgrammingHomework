#include <ctype.h>
#include <stdio.h>

char s[103];

int main() {
  fgets(s, 103, stdin);

  for (char *p = s; *p; ++p) {
    if (*p == '\n') {
      *p = 0;
      break;
    }
    // ↓是的，我也觉得这是魔法
    // 化简之后更像魔法了
    *p = (2 + (*p & 31)) % 26 + (isupper(*p) ? 'A' : 'a');
  }

  puts(s);
  return 0;
}
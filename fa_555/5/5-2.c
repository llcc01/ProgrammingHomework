#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *lhs, char *rhs) {
  char t = *lhs;
  *lhs = *rhs;
  *rhs = t;
}

void reverse(char *begin, char *end) {
  for (; begin < end; ++begin, --end)
    swap(begin, end);
}

int main() {
  char s[15];

  scanf("%s", s + 1);
  if (atoi(s + 1) % 10 == 0) {
    puts("The number cannot be changed.");
    return 0;
  }

  // 哎我好想用 std::revserse 啊，C 语言库怎么什么都没有
  int l = strlen(s + 1); // s[1..l]
  reverse(s + 1, s + l);

  puts(s + 1);
  return 0;
}

